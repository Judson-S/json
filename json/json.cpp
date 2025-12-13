// json.cpp : Source file for your target.
//

#include "json.hpp"

json::IData::~IData()
{

}

bool json::IData::isNull() const
{
	return false;
}

bool json::IData::isBoolean() const
{
	return false;
}

bool json::IData::isNumber() const
{
	return false;
}

bool json::IData::isString() const
{
	return false;
}

bool json::IData::isArray() const
{
	return false;
}

bool json::IData::isObject() const
{
	return false;
}

bool& json::IData::getBoolean()
{
	throw json::TypeError("This object is not a boolean");
}

double& json::IData::getNumber()
{
	throw json::TypeError("This object is not a number");
}

std::string& json::IData::getString()
{
	throw json::TypeError("This object is not a string");
}

json::DataVector& json::IData::getArray()
{
	throw json::TypeError("This object is not a array");
}

json::DataMap& json::IData::getObject()
{
	throw json::TypeError("This object is not a object");
}

bool json::IData::getBoolean() const
{
	throw json::TypeError("This object is not a boolean");
}

double json::IData::getNumber() const
{
	throw json::TypeError("This object is not a number");
}

std::string json::IData::getString() const
{
	throw json::TypeError("This object is not a string");
}

json::DataVector json::IData::getArray() const
{
	throw json::TypeError("This object is not a array");
}

json::DataMap json::IData::getObject() const
{
	throw json::TypeError("This object is not a object");
}

std::ostream& json::operator<<(std::ostream& out, const json::Data& data) {
	data->print(out);
	return out;
}
std::ostream& json::operator<<(std::ostream& out, const json::IData& data) {
	data.print(out);
	return out;
}

json::Data json::toData()
{
	return std::make_shared<json::Null>();
}

json::Data json::toData(bool state)
{
	return std::make_shared<json::Boolean>(state);
}

json::Data json::toData(double number)
{
	return std::make_shared<json::Number>(number);
}

json::Data json::toData(std::string string)
{
	return std::make_shared<json::String>(string);
}

json::Data json::toData(int number)
{
	return std::make_shared<json::Number>(number);
}

json::Data json::toData(char const* character)
{
	return std::make_shared<json::String>(character);
}

json::Data json::toData(json::DataVector vector)
{
	return std::make_shared<json::Array>(vector);
}

json::Data json::toData(json::DataMap object)
{
	return std::make_shared<json::Object>(object);
}
