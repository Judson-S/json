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
	Data toData(int);
	Data toData(char const*);
	Data toData(DataVector);
	Data toData(DataMap);

	std::ostream& operator<<(std::ostream& out, const json::Data& data);
	std::ostream& operator<<(std::ostream& out, const json::IData& data);
}

class json::IData {

public:
	IData() = default;
	virtual ~IData();

	virtual void print(std::ostream&) const = 0;
	virtual json::Data clone() = 0;

	virtual bool isNull() const;
	virtual bool isBoolean() const;
	virtual bool isNumber() const;
	virtual bool isString() const;
	virtual bool isArray() const;
	virtual bool isObject() const;

	virtual bool& getBoolean();
	virtual double& getNumber();
	virtual std::string& getString();
	virtual json::DataVector& getArray();
	virtual json::DataMap& getObject();

	//TODO: overload << operator, make clone logic, move on from there

private:
	
};

#include "types.hpp"