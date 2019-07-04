// 较小的两边之和大于最大的边
// 题目说是正数，不是整数，不能用int否则WA

#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int m;
    scanf("%d", &m);
    while(m--)
    {
        double a[3];
        scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
        sort(a, a+3);
        if(a[0] + a[1] > a[2])
            printf("YES\n");
        else
            printf("NO\n");

    }


    return 0;
}