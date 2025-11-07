#include <iostream>
#include "Ball.h"
#include "Parallelepiped.h"

void print_ball(Ball ball) {
    ball.calculate_volume();
    std::cout << ball.get_volume();
}

int main() {
    std::cout << "All systems are working right";

    Body *a = new Ball;
    Body *b = new Parallelepiped;

    a->calculate_volume();
    std::cout << a->get_volume();

    Ball c;
    print_ball(c);

    Ball d;
    delete a;
    delete b;
}
