#include "Number.hpp"


json::Number::~Number()
{
}

bool json::Number::isNumber()
{
	return true;
}

void json::Number::print(std::ostream& out)
{
	out << _number;
}

json::Data json::Number::clone()
{
	return json::toData(this->_number);
}

double& json::Number::getNumber()
{
	return _number;
}
