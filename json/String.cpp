#include "String.hpp"


json::String::~String()
{
}

bool json::String::isString()
{
	return true;
}

void json::String::print(std::ostream& out)
{
	out << quoted(_string);
}

json::Data json::String::clone()
{
	return json::toData(this->_string);
}

std::string& json::String::getString()
{
	return _string;
}