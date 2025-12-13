// json.hpp : Header file for your target.

#pragma once

#include <vector>
#include <map>
#include <string>
#include <memory>
#include <iostream>
#include <iomanip>
namespace json {
	class IData;
	using Data = std::shared_ptr<IData>;
	using DataVector = std::vector<Data>;
	using DataMap = std::map<std::string, Data>;
	class TypeError : public std::runtime_error {

	public:
		TypeError(std::string message) : runtime_error(message) {}
	};

	Data toData();
	Data toData(bool);
	Data toData(double);
	Data toData(std::string);
}

class json::IData {

public:
	IData() = default;
	virtual ~IData();

	virtual void print() = 0;
	virtual json::Data clone() = 0;

	virtual bool isNull();  
	virtual bool isBoolean();
	virtual bool isNumber();
	virtual bool isString();
	virtual bool isArray();
	virtual bool isObject();

	virtual bool& getBoolean();
	virtual double& getNumber();
	virtual std::string& getString();
	virtual json::DataVector& getArray();
	virtual json::DataMap& getObject();

	//TODO: overload << operator, make clone logic, move on from there

private:
	
};

#include "types.hpp"