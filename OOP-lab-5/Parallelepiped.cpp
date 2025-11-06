#include "Parallelepiped.h"

using std::to_string;

Parallelepiped::Parallelepiped()
{
	a = new double(1);
	b = new double(1);
	c = new double(1);
}

Parallelepiped::Parallelepiped(double a, double b, double c)
{
	if (LESS_OR_EQUAL(a, 0) || LESS_OR_EQUAL(b, 0) || LESS_OR_EQUAL(c, 0))
		throw std::underflow_error("Radius cannot be less or equal than zero");
	this->a = new double(a);
	this->b = new double(b);
	this->c = new double(c);
}

Parallelepiped::Parallelepiped(const Parallelepiped& other):Parallelepiped()
{
	*this = other;
}

Parallelepiped& Parallelepiped::operator=(const Parallelepiped& other)
{
	if (this != &other) {
		*a = *other.a;
		*b = *other.b;
		*c = *other.b;
	}
	return *this;
}

Parallelepiped::~Parallelepiped() 
{
	delete a;
	delete b;
	delete c;
}

double Parallelepiped::get_volume() const
{
	return *a * *b * *c;
}

double Parallelepiped::get_area() const
{
	return 2.0 * (*a * *b + *b * *c + *a * *c);
}

std::string Parallelepiped::toString() const
{
	return "Parallelepiped(" + to_string(*a) + ", " + to_string(*b) + ", " + to_string(*c) + ")";
}