#pragma once

#include "json.hpp"

namespace json {
	class Null : public IData {
	public:
		Null() = default;
		~Null() override = default;

		bool isNull() override;
		void print(std::ostream&) override;
		json::Data clone() override;
	private:
	};
}