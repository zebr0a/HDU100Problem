#include <bits/stdc++.h>

using namespace std;
const int N = 510;

int a[N];
int check(int n, int idx)
{
    int res = 0;
    for(int i=0; i<n; i++)
    {
        if(i != idx)
            res += abs(a[i] - a[idx]);
    }
    return res;
}

int main()
{
    int m;
    scanf("%d", &m);
    while(m--)
    {
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        int sum = 0x3f3f3f3f;
        for(int i=0; i<n; i++)
        {
            sum = min(sum, check(n, i));
        }
        printf("%d\n", sum);
    }

    return 0;
}