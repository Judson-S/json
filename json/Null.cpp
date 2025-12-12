#include "Null.hpp"

json::Null::Null() {
	Data null = nullptr;
}

json::Data print()
{
	std::cout << "null";
}
json::Data clone()
{

}