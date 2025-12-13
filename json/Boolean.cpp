#include "Boolean.hpp"

json::Boolean::~Boolean()
{

}

bool json::Boolean::isBoolean()
{
	return true;
}

void json::Boolean::print()
{
	if (_state)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return toData(_state);
}

json::Data json::Boolean::clone()
{
	Data newBool = json::toData(_state);
	return newBool;
}

bool& json::Boolean::getBoolean()
{
	return _state;
}
