#include <cstdio>

using namespace std;
typedef long long LL;

LL a[50+7];
LL s[50+7];

void init()
{
    for(int i=0; i<57; i++)
        s[i] = a[i] = 0;
}
LL pow2(int n)
{
    LL res = 1;
    for(int i=0; i<n; i++)
        res = res * 2;
    return res;
}

int main()
{
    init();
    a[0] = 0;
    s[0] = 3;

    for(int i=1; i<51; i++)
    {
        a[i] = pow2(i) - a[i-1];
        // printf("%lld ", a[i]);
    }
    // printf("\n");
    for(int i=1; i<51; i++)
    {
        s[i] = 3*pow2(i) - 3*a[i-1];
        // printf("%lld ", s[i]);
    }
    // printf("\n");

    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%lld\n", s[n-1]);
    }



    return 0;
}