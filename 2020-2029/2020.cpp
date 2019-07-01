#include <cstdio>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    return abs(a) > abs(b);
}
int a[100+7];
int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        sort(a, a+n, cmp);
        for(int i=0; i<n-1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }
   

    return 0;
}