#include "Ball.h"


Ball::Ball()
{
	radius = new double(1);
}

Ball::Ball(double radius)
{
	if (LESS_OR_EQUAL(radius, 0))
		throw std::underflow_error("Radius cannot be less or equal than zero");
	this->radius = new double(radius);
}

Ball::Ball(const Ball& other):Ball()
{
	*this = other;
}

Ball& Ball::operator=(const Ball& other)
{
	if (this != &other)
		*radius = *other.radius;
	return *this;
}

Ball::~Ball()
{
	delete radius;
}

double Ball::get_volume() const
{
	return 4.0 / 3.0 * PI * *radius * *radius * *radius;
}

double Ball::get_area() const
{
	return 4.0 * PI * *radius * *radius;
}

std::string Ball::toString() const
{
	return "Ball(" + std::to_string(*radius) + ")";
}
