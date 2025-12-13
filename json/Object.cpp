#include "Object.hpp"

json::Object::~Object()
{
}

bool json::Object::isObject()
{
	return true;
}

void json::Object::print(std::ostream& out)  const
{
	out << "{";
	for (auto i = _object.begin(); i != _object.end(); ++i)
	{
		if (i == prev(_object.end()))
		{
			out << quoted(i->first) << ":" << i->second;
		}
		else
		{
			out << quoted(i->first) << ":" << i->second << ",";
		}
		
	}
	out << "}";
}

json::Data json::Object::clone()
{
	json::Object objCopy = json::Object(this->_object);
	return std::make_shared<json::Object>(objCopy);
}

json::DataMap& json::Object::getObject()
{
	return _object;
}
