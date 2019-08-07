#include <cstdio>

using namespace std;
const int N = 3010;

double c[N];

int main()
{
    int n;
    double a0, an1;
    while(scanf("%d", &n) != EOF)
    {
        scanf("%lf%lf", &a0, &an1);
        for(int i=1; i<=n; i++)
            scanf("%lf", &c[i]);
        double sum = 0;
        for(int i=1; i<=n; i++)
        {
            sum = sum - (n-i+1) * c[i];
        }
        sum *= 2;
        // printf("sum = %lf\n", sum);
        sum = sum + n * a0 + an1;
        sum = sum / (n+1);
        printf("%.2lf\n", sum);
    }



    return 0;
}