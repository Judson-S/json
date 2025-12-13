#include "Array.hpp"

json::Array::~Array()
{
}

bool json::Array::isArray() const
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
	json::Data arrCopy = std::make_shared<json::Array>();
	for(auto& item : this->_array)
	{
		arrCopy->getArray().push_back(item->clone());
	}
	return arrCopy;
}

json::DataVector& json::Array::getArray()
{
	return _array;
}