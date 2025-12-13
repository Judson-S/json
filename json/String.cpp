#include "String.hpp"


json::String::~String()
{
}

bool json::String::isString()
{
	return true;
}

void json::String::print()
{
	std::cout << quoted(_string);
}

json::Data json::String::clone()
{
	return Data();
}

std::string& json::String::getString()
{
	return _string;
}

json::String& json::toData(std::string string)
{
	return *(new json::String(string));
}