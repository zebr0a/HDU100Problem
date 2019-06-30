#include <cstdio>
#include <algorithm>

using namespace std;

int a[100+7];
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        int sum = 0;
        for(int i=1; i<n-1; i++)
        {
            sum += a[i];
        }
        printf("%.2lf\n", 1.0 * sum / (n-2));
    }


    return 0;
}