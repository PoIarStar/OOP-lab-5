#pragma once
#include <stdexcept>

#define EPS 10e-6
#define LESS_OR_EQUAL(x, y)((x) - (y) < EPS)

class Body
{
	virtual double get_volume() const = 0;
	virtual double get_area() const = 0;
};

