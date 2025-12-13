// json_test.cpp : Source file for your target.
//

#include "json.hpp"
#include "types.hpp"
#include <gtest/gtest.h>

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

}

TEST(Clone, CorrectValueClone) {

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

}

TEST(Getters, CorrectValue) {

}

TEST(ToDataFunc, CorrectReturn) {

}