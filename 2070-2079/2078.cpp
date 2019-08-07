#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int amin = 1000000, a;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a);
            amin = min(amin, a);
        }
        printf("%d\n", (100-amin) * (100-amin));
    }


    return 0;
}