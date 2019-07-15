// https://blog.csdn.net/synapse7/article/details/14642937
// 解析看上面这篇博客，写的很好

#include <cstdio>

using namespace std;
typedef long long LL;

LL func(int n)  // 计算阶乘
{
    LL res = 1;
    for(int i=1; i<=n; i++)
        res = res * i;
    return res;
}

LL a[21];

int main()
{
     int c;
     scanf("%d", &c);
     a[1] = 0;
     a[2] = 1;
     for(int i=3; i<=20; i++)
     {
         a[i] = (i-1) * a[i-1] + (i-1) * a[i-2];
     }
     while(c--)
     {
         int n;
         scanf("%d", &n);
         LL total = func(n);
         printf("%.2lf%%\n", 1.0 * a[n] / total * 100);


     }



    return 0;
}