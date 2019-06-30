#include <iostream>
#include <cstdio>
#define PI 3.1415927
using namespace std;


int main()
{
    double r;
    while(~scanf("%lf", &r))
    {
        printf("%.3lf\n", 4.0 / 3 * PI * r * r * r);
    }


    return 0;
}