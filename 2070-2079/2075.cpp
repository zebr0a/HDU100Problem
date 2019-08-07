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
        if(a%b == 0)
            printf("YES\n");
        else 
            printf("NO\n");
    }



    return 0;
}