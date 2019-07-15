// 斐波那契数列，本以为只有50大小不会爆int，结果还是爆了

#include <cstdio>

using namespace std;

long long a[50+7];
int main()
{
    a[1] = 1;
    a[2] = 1;
    for(int i=3; i<50+7; i++)
        a[i] = a[i-1] + a[i-2];
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int b1, b2;
        scanf("%d%d", &b1, &b2);
        int ans = b2 - b1;
        if(ans == 0)
            printf("0\n");
        else
            printf("%lld\n", a[ans+1]);
    }



    return 0;
}