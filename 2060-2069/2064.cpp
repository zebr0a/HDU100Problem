#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL a[40];

int main()
{
    a[1] = 2;
    for(int i=2; i<=40; i++)
    {
        a[i] = a[i-1] * 3 + 2;
    }
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%lld\n", a[n]);
    }


    return 0;
}