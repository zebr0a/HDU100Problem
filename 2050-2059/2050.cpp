#include <cstdio>

using namespace std;
typedef long long LL;

LL a[10000+7];

int main()
{
    a[1] = 2;
    for(int i=2; i<=10000; i++)
    {
        a[i] = a[i-1] + 4 * (i-1) + 1;
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d", &num);
        printf("%lld\n", a[num]);
    }


    return 0;
}