#include "Boolean.hpp"

json::Boolean::~Boolean()
{

}

bool json::Boolean::isBoolean()
{
	return true;
}

json::Data json::Boolean::print()
{
	if (_state)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}

json::Data json::Boolean::clone()
{
	
}

bool& json::Boolean::getBoolean()
{
	return _state;
}
