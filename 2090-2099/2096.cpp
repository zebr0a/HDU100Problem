#include <bits/stdc++.h>

using namespace std;
typedef long long LL;


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        LL a, b;
        scanf("%lld %lld", &a, &b);

        printf("%lld\n", (a+b) % 100);
    }


    return 0;
}