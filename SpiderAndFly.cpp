#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    double x1, y1;
    double x2, y2, z2;

    std::cin >> a >> b >> c >> x1 >> y1 >> x2 >> y2 >> z2;

    if ((x1 == 0 or x1 == a) and z2 != 0)
    {
        std::cout << sqrt(pow(z2 - x1, 2) + pow(y2 - y1, 2));
    }
    else if ((y1 == 0 or y1 == b) and z2 != 0)
    {
        std::cout << sqrt(pow(z2 - y1, 2) + pow(x2 - x1, 2));
    }
    else
    {
        printf("%.2f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    }

    return 0;
}