#include "Array.hpp"

json::Array::~Array()
{
}

bool json::Array::isArray()
{
	return true;
}

void json::Array::print()
{
	std::cout << "[";
	for (Data d : _array)
	{
		std::cout << d << ", ";
	}
	std::cout << "]";
}

json::Data json::Array::clone()
{
	return Data();
}

json::DataVector& json::Array::getArray()
{
	return _array;
}