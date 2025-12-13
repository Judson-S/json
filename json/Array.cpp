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
	for (int i = 0; i < _array.size(); ++i)
	{
		if(i == _array.size() - 1)
		{
			out << _array[i];
		}
		else
		{
			out << _array[i] << ",";
		}
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