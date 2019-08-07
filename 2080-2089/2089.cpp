#include <cstdio>
#include <stack>

using namespace std;

int check(int x)
{
    int m1, m2;
    while(x)
    {
        m1 = x % 10;
        m2 = (x/10) % 10;
        if(m1 == 4)
            return 0;
        if(m1 == 2 && m2 == 6)
            return 0;
        x /= 10;
    }
    return 1;
}

int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m), n+m)
    {
        int ans = 0;
        for(int i=n; i <= m; i++)
        {
            if(check(i))
                ans ++;
        }
        printf("%d\n", ans);
    }


    return 0;
}