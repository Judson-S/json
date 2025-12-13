#pragma once
#include "json.hpp"
namespace json {
	class String : public IData {
	public:
		String() : _string{ "" } {}
		String(std::string string) : _string{ string } {}
		String(char const* string) : _string{ string } {}
		~String();

		bool isString() const override;

		void print(std::ostream&)  const override;
		Data clone() override;

		std::string& getString() override;
		std::string getString() const override;
	private:
		std::string _string;
	};
}
