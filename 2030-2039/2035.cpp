// 快速幂

#include <cstdio>
using namespace std;
typedef long long LL;

LL pow_mod(LL a, LL n, LL mod)
{
    LL res = 1;
    while(n)
    {
        if(n%2 != 0)
        {
            res = res * a % mod;
        }
        a = a * a % mod;
        n = n / 2;
    }
    return res;
}

int main()
{
    LL a, b;
    while(scanf("%lld%lld", &a, &b), a || b)
    {
        printf("%lld\n", pow_mod(a, b, 1000));
    }


    return 0;
}