#pragma once

#include "json.hpp"

namespace json {
	class Null : public IData {
	public:
		Null();
		json::Null print() override;
		json::Null clone() override;
	private:
	};
}