#include <bits/stdc++.h>

using namespace std;
typedef long long LL;



int main()
{
    int n;
    while(scanf("%d", &n), n != -1)
    {
        LL ans1 = 0;
        LL ans2 = 0;
        ans1 += 1;
        for(int i=0; i<n; i++)
        {
            LL tmp1 = 0;
            LL tmp2 = 0;
            if(ans1 != 0)
            {
                tmp1 += ans1 * 3;
                tmp2 += ans1 * 1;
            }
            if(ans2 != 0)
            {
                tmp1 += ans2 * 2;
                tmp2 += ans2 * 1;
            }
            ans1 = tmp1;
            ans2 = tmp2;
        }        
        printf("%lld, %lld\n", ans1, ans2);
    }


    return 0;
}