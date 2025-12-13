#include "Array.hpp"

json::Array::~Array()
{
}

bool json::Array::isArray()
{
	return true;
}

void json::Array::print(std::ostream& out)
{
	out << "[";
	for (Data d : _array)
	{
		out << d << ", ";
	}
	out << "]";
}

json::Data json::Array::clone()
{
	return Data();
}

json::DataVector& json::Array::getArray()
{
	return _array;
}