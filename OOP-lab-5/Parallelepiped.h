#pragma once
#include "Body.h"

class Parallelepiped : public Body
{
protected:
	double* a, * b, * c;
public:
	Parallelepiped();
	Parallelepiped(double a, double b, double c);
	Parallelepiped(const Parallelepiped& other);
	Parallelepiped& operator=(const Parallelepiped& other);
	~Parallelepiped() override;

	void calculate_volume() override;
	void calculate_area() override;

	std::string toString() const override;
};

