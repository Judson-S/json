#pragma once
#include "json.hpp"
namespace json {
	class Array : public IData {
	public:
		Array() : _array{ } {}
		Array(DataVector array) : _array{ array } {}
		~Array();

		bool isArray() const override;

		void print(std::ostream&) const override;
		Data clone() override;

		DataVector& getArray() override;
		DataVector getArray() const override;

	private:
		DataVector _array;
	};
}
