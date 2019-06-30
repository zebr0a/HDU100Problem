#include <cstdio>
#include <algorithm>

using namespace std;

int num[100];
int a[100+7];
int main()
{
    for(int i=0; i<100; i++)
    {
        num[i] = (i+1) * 2;
    }
    int n, m;
    while(~scanf("%d %d", &n, &m))
    {
        int cnt = 0;
        for(int i=0; i<n; i+=m)
        {
            int tmp = 0;
            for(int j=i; j<m+i && j < n; j++)
            {
                tmp += num[j];
            }
            a[cnt++] = tmp;

        }
        for(int i=0; i<cnt-1; i++)
        {
            printf("%d ", a[i]/m);
        }
        if(n%m != 0)
            printf("%d\n", a[cnt-1]/(n%m));
        else
            printf("%d\n", a[cnt-1]/m);
    }


    return 0;
}