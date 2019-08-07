#include <bits/stdc++.h>

using namespace std;
const int N = 110;

double a[N];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%lf", &a[i]);
        }
        double maxnum = a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i] > maxnum)
                maxnum = a[i];
        }
        printf("%.2lf\n", maxnum);
    }


    return 0;
}