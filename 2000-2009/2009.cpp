#include <cstdio>
#include <cmath>
using namespace std;

// int a[10000+7];
int main()
{
    double n;
    int m;
    while(scanf("%lf %d", &n, &m) != EOF)
    {
        double sum = 0;
        sum += n;
        for(int i=1; i<m; i++)
        {
            n = sqrt(n);
            sum += n;
        }
        printf("%.2lf\n", sum);
    }


    return 0;
}