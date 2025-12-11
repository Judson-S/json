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
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

double& json::IData::getNumber()
{
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

std::string& json::IData::getString()
{
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

json::DataVector& json::IData::getArray()
{
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

json::DataMap& json::IData::getObject()
{
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}
