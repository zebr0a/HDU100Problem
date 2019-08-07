#include <cstdio>

using namespace std;
typedef long long LL;

LL a[55];

int main()
{
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    for(int i=3; i<55; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    int n;
    while(scanf("%d", &n), n != -1)
    {
        printf("%lld\n", a[n]);
    }


    return 0;
}