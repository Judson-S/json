#pragma once

#include "json.hpp"

namespace json {
	class Null : public IData {
	public:
		Null();
		void print() override;
		json::Null clone() override;
	private:
	};
}