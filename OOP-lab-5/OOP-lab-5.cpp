#include <iostream>
#include "Ball.h"
#include "Parallelepiped.h"

int main()
{
    
    while (1) {
        Body* a = new Ball;
        Body* b = new Parallelepiped;
        delete a;
        delete b;
    }
}
