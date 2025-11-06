#include "Body.h"

Body::~Body()
{
}

std::istream& operator>>(std::istream& is, Body& obj)
{
	return is;
}

std::ostream& operator<<(std::ostream& os, const Body& obj)
{
	return os;
}
