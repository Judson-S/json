// json.cpp : Source file for your target.
//

#include "json.hpp"

json::IData::~IData()
{

}

bool json::IData::isNull()
{
	return false;
}

bool json::IData::isBoolean()
{
	return false;
}

bool json::IData::isNumber()
{
	return false;
}

bool json::IData::isString()
{
	return false;
}

bool json::IData::isArray()
{
	return false;
}

bool json::IData::isObject()
{
	return false;
}

bool& json::IData::getBoolean()
{
	bool default;
	try {
		throw json::TypeError("This object is not a boolean");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
	return default;
}

double& json::IData::getNumber()
{
	double default;
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
	return default;
}

std::string& json::IData::getString()
{
	std::string default;
	try {
		throw json::TypeError("This object is not a string");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
	return default;
}

json::DataVector& json::IData::getArray()
{
	json::DataVector default;
	try {
		throw json::TypeError("This object is not a array");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
	return default;
}

json::DataMap& json::IData::getObject()
{
	json::DataMap default;
	try {
		throw json::TypeError("This object is not a object");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
	return default;
}

std::ostream& operator<<(std::ostream& out, const json::Data& data) {
	data->print();
	return out;
}
