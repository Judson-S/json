#pragma once
#include "json.hpp"
namespace json {
	class Boolean : public IData {
	public:
		Boolean() : _state{ false } {}
		Boolean(bool state) : _state{ state } {}
		~Boolean();

		bool isBoolean() const override;

		void print(std::ostream&) const override;
		Data clone() override;

		bool& getBoolean() override;
	private:
		bool _state;
	};
}

