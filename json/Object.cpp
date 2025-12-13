#include "Object.hpp"

json::Object::~Object()
{
}

bool json::Object::isObject() const
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
	json::Data objCopy = std::make_shared<json::Object>();
	for (auto& pair : this->_object)
	{
		objCopy->getObject()[pair.first] = pair.second->clone();
	}
	return objCopy;
}

json::DataMap& json::Object::getObject()
{
	return _object;
}
