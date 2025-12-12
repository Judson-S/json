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
	EXPECT_EQ(arr.getArray(), nullptr);
	EXPECT_TRUE(obj.getObject().empty());
	EXPECT_EQ(str.getString(), "");
	EXPECT_EQ(num.getBoolean(), false);

}

TEST(Print, CorrectOutput) {

}

TEST(Clone, CorrectValue) {

}

TEST(Error, ThrowsTypeError) {

}

TEST(Identifiers, CorrectReturn) {

}

TEST(Getters, CorrectValue) {

}

TEST(ToDataFunc, CorrectReturn) {

}