#include "Null.hpp"

json::Null::Null() {
	Data null = nullptr;
}

void print()
{
	std::cout << "null";
}
json::Data clone()
{
	return std::make_shared<json::Null>();
}