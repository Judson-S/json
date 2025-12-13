// json_test.cpp : Source file for your target.
//

#include "json.hpp"
#include "types.hpp"
#include <gtest/gtest.h>
#include <sstream>
using namespace json;
TEST(Constructor, CorrectValue) {
	json::Number num;
	json::Array arr;
	json::Object obj;
	json::String str;
	json::Boolean bln;

	EXPECT_EQ(num.getNumber(), 0.0);
	EXPECT_TRUE(arr.getArray().empty());
	EXPECT_TRUE(obj.getObject().empty());
	EXPECT_EQ(str.getString(), "");
	EXPECT_EQ(bln.getBoolean(), false);

}

TEST(Print, CorrectOutput) {
	std::ostringstream sout("");
	json::Number num = 7;
	json::Data arr = json::toData(json::DataVector{
	  json::toData(3.14),
	  json::toData("cool grapes"),
	  json::toData() });
	json::Data obj = json::toData(json::DataMap{
	  { "fee", json::toData("feeling groovy") },
	  { "fie", json::toData(true) },
	  { "foe", json::toData(98.6) }
		});
	json::String str = "Hello, world!";
	json::Boolean bln = true;

	num.print(sout);
	EXPECT_EQ(sout.str(), "7");
	sout.str("");
	arr->print(sout);
	EXPECT_EQ(sout.str(), "[3.14, \"cool grapes\", null]");
	sout.str("");
	obj->print(sout);
	EXPECT_EQ(sout.str(), "{\"fee\":\"feeling groovy\",\"fie\":true,\"foe\":98.6}");
	sout.str("");
	str.print(sout);
	EXPECT_EQ(sout.str(), "\"Hello, world!\"");
	sout.str("");
	bln.print(sout);
	EXPECT_EQ(sout.str(), "true");
}

TEST(Clone, CorrectValueClone) {
	json::Null null;
	json::Data nullClone = null.clone();
	EXPECT_TRUE(nullClone->isNull());

	json::Number num = 42;
	json::Data numClone = num.clone();
	EXPECT_TRUE(numClone->isNumber());
	EXPECT_EQ(numClone->getNumber(), 42);

	json::String str = "Test";
	json::Data strClone = str.clone();
	EXPECT_TRUE(strClone->isString());
	EXPECT_EQ(strClone->getString(), "Test");

	json::Boolean bln = false;
	json::Data blnClone = bln.clone();
	EXPECT_TRUE(blnClone->isBoolean());
	EXPECT_EQ(blnClone->getBoolean(), false);

	json::Data arr = json::toData(json::DataVector{ json::toData(1), json::toData(2) });
	json::Data arrClone = arr->clone();
	EXPECT_TRUE(arrClone->isArray());
	EXPECT_EQ(arrClone->getArray().size(), 2);

	json::Data obj = json::toData(json::DataMap{ {"key", json::toData("value")} });
	json::Data objClone = obj->clone();
	EXPECT_TRUE(objClone->isObject());
	EXPECT_EQ(objClone->getObject().size(), 1);
}

TEST(Error, ThrowsTypeError) {
	json::Null null;
	json::Number num;

	EXPECT_THROW(null.getBoolean(), json::TypeError);
	EXPECT_THROW(null.getNumber(), json::TypeError);
	EXPECT_THROW(null.getString(), json::TypeError);
	EXPECT_THROW(null.getArray(), json::TypeError);
	EXPECT_THROW(null.getObject(), json::TypeError);
}

TEST(Identifiers, CorrectReturn) {
	json::Array arr;
	EXPECT_TRUE(arr.isArray());

	json::Boolean bln;
	EXPECT_TRUE(bln.isBoolean());

	json::Null null;
	EXPECT_TRUE(null.isNull());
	
	json::Number num;
	EXPECT_TRUE(num.isNumber());

	json::Object obj;
	EXPECT_TRUE(obj.isObject());

	json::String str;
	EXPECT_TRUE(str.isString());
}

TEST(Getters, CorrectValue) {
	json::Number num = 3.14;
	EXPECT_EQ(num.getNumber(), 3.14);

	json::String str = "Test string";
	EXPECT_EQ(str.getString(), "Test string");

	json::Boolean bln = true;
	EXPECT_EQ(bln.getBoolean(), true);

	json::DataVector vec = { json::toData(1), json::toData(2) };
	json::Array arr = json::Array(vec);
	EXPECT_EQ(arr.getArray().size(), 2);

	json::DataMap map = { {"key1", json::toData("value1")}, {"key2", json::toData(2)} };
	json::Object obj = json::Object(map);
	EXPECT_EQ(obj.getObject().size(), 2);
}

TEST(ToDataFunc, CorrectReturn) {
	EXPECT_EQ(json::toData(5)->getNumber(), 5);
	EXPECT_EQ(json::toData("hello")->getString(), "hello");
	EXPECT_EQ(json::toData(true)->getBoolean(), true);
}