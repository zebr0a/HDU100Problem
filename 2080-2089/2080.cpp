#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double x1, y1, x2, y2;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        double a = sqrt(x2*x2 + y2 * y2);
        double b = sqrt(x1*x1 + y1 * y1);
        double c = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
        double cosc = (a*a + b*b - c*c) / (2*a*b);
        printf("%.2lf\n", acos(cosc) * 180.0 / acos(-1));
    }



    return 0;
}