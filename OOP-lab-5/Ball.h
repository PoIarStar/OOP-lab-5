#pragma once
#include "Body.h"

class Ball : public Body
{
protected:
	double *radius;
public:
	Ball();
	Ball(double radius);
	Ball(const Ball& other);
	Ball& operator=(const Ball& other);
	~Ball();

	double get_volume() const override;
	double get_area() const override;
};

