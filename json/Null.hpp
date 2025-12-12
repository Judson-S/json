#pragma once

#include "json.hpp"

namespace json {
	class Null : public IData
	{
	public:
		Null();
		json::Data print();
		json::Data clone();
	private:
	};
}