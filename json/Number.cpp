#include "Number.hpp"


json::Number::~Number()
{
}

bool json::Number::isNumber()
{
	return true;
}

json::Data json::Number::print()
{
	std::cout << _number;
}

json::Data json::Number::clone()
{
	return Data();
}

double& json::Number::getNumber()
{
	return _number;
}
