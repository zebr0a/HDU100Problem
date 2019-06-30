#include <cstdio>

using namespace std;

bool check(int num)
{
    int sum = 0;
    int x = num;
    while(x)
    {
        int tmp = x%10;
        sum += tmp * tmp * tmp;
        x /= 10;
    }
    if(sum == num)
        return true;
    return false;
}
int a[100];
int main()
{
    int m, n;
    int ans = 0;
    while(scanf("%d %d", &m, &n) != EOF)
    {
        ans = 0;
        for(int i=m; i<=n; i++)
        {
            if(check(i))
            {
                a[ans++] = i;
            }
        }
        if(ans == 0)
            printf("no\n");
        else
        {
            for(int i=0; i<ans-1; i++)
            {
                printf("%d ", a[i]);
            }
            printf("%d\n", a[ans-1]);
        }
        
        
    }



    return 0;
}