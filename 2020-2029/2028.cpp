// 实现预测到a*b会溢出，但还是因为逻辑不够清晰WA了几发
// n个数求最小公倍数是两两求，拿之前的最小公倍数与下一个数求最小公倍数
// 求最大公约数是拿之前的最大公约数与下一个数求最大公约数
// 我就拿得到的最大公约数和下一个数求最小公倍数，所以当然会WA了

#include <cstdio>
#include <algorithm>

using namespace std;
typedef long long LL;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a%b);
}

int main()
{
    int n;
    LL ans = 1;
    int num, tmp;
    tmp = 1;
    while(scanf("%d", &n) != EOF)
    {
        scanf("%d", &num);
        tmp = num;
        ans = num;
        for(int i=1; i<n; i++)
        {
            scanf("%d", &num);
            tmp = gcd(ans, num);
            ans = num/tmp * ans;
        }
        printf("%lld\n", ans);
    }
    



    return 0;
}