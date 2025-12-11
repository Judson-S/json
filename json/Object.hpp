#pragma once
#include "json.hpp"
namespace json {
	class Object : public IData {
	public:
		Object() : _object{ } {}
		Object(DataMap object) : _object{ object } {}
		~Object();

		bool isObject() override;

		Data print() override;
		Data clone() override;

		DataMap& getObject() override;
	private:
		DataMap _object;
	};
}
