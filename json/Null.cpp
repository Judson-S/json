#include "Null.hpp"

bool json::Null::isNull()
{
	return true;
}
void print(std::ostream& out)
{
	out << "null";
}
json::Data clone()
{
	return std::make_shared<json::Null>();
}