// 类似猴子吃桃问题
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a;
        scanf("%d", &a);
        int ans = 3;
        for(int i=0; i<a; i++)
        {
            ans -= 1;
            ans = ans * 2;
        }
        printf("%d\n", ans);


    }


    return 0;
}