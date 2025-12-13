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
	if(isBoolean()) {
		bool def;
		return def;
	}
	try {
		throw json::TypeError("This object is not a boolean");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

double& json::IData::getNumber()
{
	if(isNumber()) {
		double def;
		return def;
	}
	try {
		throw json::TypeError("This object is not a number");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

std::string& json::IData::getString()
{
	if(isString()) {
		std::string def;
		return def;
	}
	try {
		throw json::TypeError("This object is not a string");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

json::DataVector& json::IData::getArray()
{
	if(isArray()) {
		json::DataVector def;
		return def;
	}
	try {
		throw json::TypeError("This object is not a array");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

json::DataMap& json::IData::getObject()
{
	if(isObject()) {
		json::DataMap def;
		return def;
	}
	try {
		throw json::TypeError("This object is not a object");
	}
	catch (std::runtime_error& err) {
		std::cerr << err.what() << "\n";
	}
}

std::ostream& operator<<(std::ostream& out, const json::Data& data) {
	data->print();
	return out;
}
std::ostream& operator<<(std::ostream& out, const json::IData& data) {
	out << data;
	return out;
}
