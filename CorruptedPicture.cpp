#include <iostream>
#include <math.h>

int main()
{
    double x0, y0, x1, y1, x2, y2, x3, y3, h;
    std::cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> h;

    double x = -((x0*y1-x1*y0)*(x3-x2)-(x2*y3-x3*y2)*(x1-x0))/((y0-y1)*(x3-x2)-(y2-y3)*(x1-x0));
    double y = ((y2-y3)*(-x)-(x2*y3-x3*y2))/(x3-x2);

    std::cout << h - sqrt((x - x0)*(x - x0) + (y - y0)*(y - y0)) << std::endl;
    std::cout << x << " " << y << std::endl;

    return 0;
}