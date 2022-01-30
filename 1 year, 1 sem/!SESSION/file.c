#include <iostream>

using namespace std;

double min(double x, double y, double z)
{
    return (x <= y && x < z) ? x : (y <= x && y <= z) ? y : z;
}

double min(double x, double y)
{
    return x <= y ? x : y;
}

double max(double x, double y) {
    return x >= y ? x : y;
}

int main()
{
    cout << min(5,62, 3);
    return 0;
}