// 与2048一样计算错排数，不同得是计算得是m个错排得错排方案数
// 此外因为n个人中m个错排所以需要先选出这个人，组合数
#include <cstdio>

using namespace std;
typedef long long LL;

LL a[20+7];

LL func(int n, int m)   // 计算组合数
{  
    LL res = 1;
    for(int i=1; i<=n; i++)
        res = res * i;
    for(int i=1; i<=n-m; i++)
        res /= i;
    for(int i=1; i<=m; i++)
        res /= i;
    return res;
}
int main()
{
    a[1] = 0;
    a[2] = 1;
    for(int i=3; i<=20; i++)
    {
        a[i] = (i-1) * a[i-1] + (i-1) * a[i-2];
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        printf("%lld\n", func(n, m) * a[m]);
    }


    return 0;
}