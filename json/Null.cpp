#include "Null.hpp"

json::Null::Null() {
	Data null = nullptr;
}

void print()
{
	std::cout << "null";
}
json::Null clone()
{
	return this;
}