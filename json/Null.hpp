#pragma once

#include "json.hpp"

namespace json {
	class Null : public IData {
	public:
		Null();
		~Null() override = default;
		void print() override;
		json::Data clone() override;
	private:
	};
}