#include "Ball.h"


Ball::Ball()
{
	radius = new double(1);
}

Ball::Ball(double radius)
{
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

void Ball::calculate_volume()
{
	*volume = 4.0 / 3.0 * PI * *radius * *radius * *radius;
}

void Ball::calculate_area()
{
	*volume = 4.0 * PI * *radius * *radius;
}

std::string Ball::toString() const
{
	return "Ball(" + std::to_string(*radius) + ")";
}
