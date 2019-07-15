// 类似Fibonacci数列

#include <cstdio>
using namespace std;
typedef long long LL;

LL s[50+7];

int main()
{
    s[0] = 0;
    s[1] = 1;
    s[2] = 2;
    for(int i=3; i<=50; i++)
        s[i] = s[i-1] + s[i-2];
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%lld\n", s[n]);



    }

    return 0;
}