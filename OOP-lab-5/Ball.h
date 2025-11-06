#pragma once
#include "Body.h"

#define PI 3.1415926

class Ball : public Body
{
protected:
	double *radius;
public:
	Ball();
	Ball(double radius);
	Ball(const Ball& other);
	Ball& operator=(const Ball& other);
	~Ball() override;

	double get_volume() const override;
	double get_area() const override;

	std::string toString() const override;
};

