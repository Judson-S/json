#pragma once
#include "json.hpp"
namespace json {
	class Object : public IData {
	public:
		Object() : _object{ } {}
		Object(DataMap object) : _object{ object } {}
		~Object();

		bool isObject() const override;

		void print(std::ostream&) const override;
		Data clone() override;

		DataMap& getObject() override;
		const DataMap& getObject() const override;
	private:
		DataMap _object;
	};
}
