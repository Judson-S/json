#pragma once
#include "json.hpp"
namespace json {
	class String : public IData {
	public:
		String() : _string{ "" } {}
		String(std::string string) : _string{ string } {}
		~String();

		bool isString() override;

		void print() override;
		Data clone() override;

		std::string& getString() override;
	private:
		std::string _string;
	};
}
