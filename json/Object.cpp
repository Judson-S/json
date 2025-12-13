#include "Object.hpp"

json::Object::~Object()
{
}

bool json::Object::isObject()
{
	return true;
}

void json::Object::print(std::ostream& out)
{
	out << "{";
	for (auto i = _object.begin(); i != _object.end(); ++i)
	{
		out << quoted(i->first) << ":" << i->second;
	}
	out << "}";
}

json::Data json::Object::clone()
{
	return Data();
}

json::DataMap& json::Object::getObject()
{
	return _object;
}
