#pragma once
#include "json.hpp"
namespace json {
	class Number : public IData {
	public:
		Number() : _number{ 0 } {}
		Number(double state) : _number{ state } {}
		~Number();

		bool isNumber() const override;

		void print(std::ostream&) const override;
		Data clone() override;

		double& getNumber() override;
	private:
		double _number;
	};
}
