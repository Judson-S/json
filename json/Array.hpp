#pragma once
#include "json.hpp"
namespace json {
	class Array : public IData {
	public:
		Array() : _array{ nullptr } {}
		Array(DataVector array) : _array{ array } {}
		~Array();

		bool isArray() override;

		void print(std::ostream&) override;
		Data clone() override;

		DataVector& getArray() override;
	private:
		DataVector _array;
	};
}
