#include "Body.h"

Body::Body() {
    volume = new double(0);
    area = new double(0);
}

Body::~Body()
= default;

double Body::get_volume() const {
    return *volume;
}

double Body::get_area() const {
    return *area;
}
