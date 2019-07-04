/* 把矩形分解成n-2个三角形
用叉乘计算三角形面积带绝对值
但是如果在计算多变型的面积时，就不带绝对值
因为多边形分凹凸的情况，凸的贡献为正，凹的贡献为负 */

#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long long LL;

struct node{
    int x, y;
};
struct node a[100+7];

int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d %d", &a[i].x, &a[i].y);
        }
        double s = 0;
        for(int i=2; i<n; i++)
        {
            int t1x = a[i-1].x - a[0].x;
            int t1y = a[i-1].y - a[0].y;
            int t2x = a[i].x - a[0].x;
            int t2y = a[i].y - a[0].y;
            // s = s + 1.0 * abs(t1x*t2y - t2x*t1y);    
            s = s + 1.0 * (t1x*t2y - t2x*t1y);
        }
        printf("%.1lf\n", s/2);

    }    


    return 0;
}