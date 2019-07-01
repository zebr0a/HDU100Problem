/*
贪心思想，对于每个老师优先发面值大的RMB
 */

#include <cstdio>
#include <algorithm>

using namespace std;

int RMB[] = {100, 50, 10, 5, 2, 1};
int a[100+7];

int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<6; j++)
            {
                while(a[i] >= RMB[j])
                {
                    a[i] -= RMB[j];
                    ans ++;
                }
            }
        }
        printf("%d\n", ans);
    }


    return 0;
}