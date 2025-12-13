#include "Boolean.hpp"

json::Boolean::~Boolean()
{

}

bool json::Boolean::isBoolean() const
{
	return true;
}

void json::Boolean::print(std::ostream& out) const
{
	if (_state)
	{
		out << "true";
	}
	else
	{
		out << "false";
	}
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
