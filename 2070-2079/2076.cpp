#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double h, m, s;
        scanf("%lf %lf %lf", &h, &m, &s);
        if(h >= 12.0)
            h -= 12.0;
        double mc = m*6 + s*0.1;
        double hc = h*5*6 + (m + s/60.0) / 60.0 * 30.0;
        
        double ans = 0;
        if(hc > mc)
            ans = hc - mc;
        else 
            ans = mc - hc;
        if(ans > 180.0)
            printf("%.0lf\n", floor(360.0 - ans));
        else 
            printf("%.0lf\n", floor(ans));
        
    }



    return 0;
}