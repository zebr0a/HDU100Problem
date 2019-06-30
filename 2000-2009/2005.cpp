#include <cstdio>
using namespace std;

int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int y, m, d;
    while(scanf("%d/%d/%d", &y, &m, &d) != EOF)
    {
        int ans = 0;
        for(int i=0; i<m; i++)
            ans += a[i];
        ans += d;
        if( ((y%4==0 && y%100 != 0) || y%400==0) && m >= 3)
            printf("%d\n", ans+1);
        else
            printf("%d\n", ans);

    }



    return 0;
}