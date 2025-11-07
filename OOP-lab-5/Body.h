#pragma once
#include <stdexcept>
#include <iostream>
#include <string>

#define EPS 10e-6
#define LESS_OR_EQUAL(x, y)((x) - (y) < EPS)

class Body {
protected:
    double *area, *volume;

public:
    Body();

    virtual ~Body();

    virtual void calculate_area() = 0;

    virtual void calculate_volume() = 0;

    double get_volume() const;

    double get_area() const;

    virtual std::string toString() const = 0;
};
