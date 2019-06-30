#include <cstdio>
#include <math.h>
using namespace std;

bool isprime(int num)
{
    if(num <= 1)
        return false;
    int n = sqrt(num);
    for(int i=2; i<=n; i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

bool check(int x, int y)
{
    for(int i=x; i<=y; i++)
    {
        if(!isprime(i*i + i + 41))
            return false;
    }
    return true;
}

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y), (x || y))
    {
        if(check(x, y))
            printf("OK\n");
        else
            printf("Sorry\n");
    }

    return 0;
}