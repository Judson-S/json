#include "Null.hpp"

bool json::Null::isNull()
{
	return true;
}
void json::Null::print(std::ostream & out)
{
	out << "null";
}
json::Data json::Null::clone()
{
	return std::make_shared<json::Null>();
}