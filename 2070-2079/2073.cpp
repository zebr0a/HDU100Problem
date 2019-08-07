#include <bits/stdc++.h>

using namespace std;

double cal(double x, double y)
{
    double i = 0, j = 1;
    double res = 0;
    int cnt = 0;
    while(i <= y-1 && j <= y)
    {
        if(cnt % 2 == 0)
        {
            res += sqrt(i*i + j*j);
            i++;
            cnt ++;
        }
        else
        {
            res += sqrt(i*i + j*j);
            j++;
            cnt ++;
        }
    }
    return res;
}
double ffabs(double num)
{
    if(num < 0)
        return -num;
    return num;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        double x1, y1, x2, y2;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
 
        double dis1 = 0;
        if(x1 != 0)
        {
            dis1 += x1 * sqrt(2.0);
            y1 += x1;
            x1 = 0;
        }

        double dis2 = 0;
        if(x2 != 0)
        {
            dis2 += x2 * sqrt(2.0);
            y2 += x2;
            x2 = 0;
        }
        dis1 += cal(x1, y1);
        dis2 += cal(x2, y2);
        printf("%.3lf\n", ffabs(dis2 - dis1));

    }



    return 0;
}