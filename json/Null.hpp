#pragma once

#include "json.hpp"

namespace json {
	class Null : public IData {
	public:
		Null();
		void print() override;
		json::Data clone() override;
	private:
	};
}