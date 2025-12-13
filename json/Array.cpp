#include "Array.hpp"

json::Array::~Array()
{
}

bool json::Array::isArray()
{
	return true;
}

void json::Array::print(std::ostream& out)  const
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
	json::Array arrCopy = json::Array(this->_array);
	return std::make_shared<json::Array>(arrCopy);
}

json::DataVector& json::Array::getArray()
{
	return _array;
}