#include "Null.hpp"

void print(std::ostream& out)
{
	out << "null";
}
json::Data clone()
{
	return std::make_shared<json::Null>();
}