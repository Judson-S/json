#include "Object.hpp"

json::Object::~Object()
{
}

bool json::Object::isObject()
{
	return true;
}

json::Data json::Object::print()
{
	std::cout << "{";
	for (auto i = _object.begin(); i != _object.end(); ++i)
	{
		std::cout << quoted(i->first) << ":" << i->second;
	}
	std::cout << "}";
}

json::Data json::Object::clone()
{
	return Data();
}

json::DataMap& json::Object::getObject()
{
	return _object;
}