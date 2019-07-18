#include <cstdio>
#include <cmath>

using namespace std;
typedef long long LL;

int main()
{
    LL n, m;
    while(scanf("%lld %lld", &n, &m), n+m) // n, m都不为0
    {
        for(LL d = sqrt(2*m); d>0; d--)
        {
            LL a = (2*m - d*d - d) / (2*d);
            if(2*a*d + d + d*d == 2*m)
            {
                printf("[%lld,%lld]\n", a+1, a+d);
            }
        }
        printf("\n");
    }


    return 0;
}