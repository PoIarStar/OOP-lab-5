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

	void calculate_volume() override;
	void calculate_area() override;

	std::string toString() const override;
};

