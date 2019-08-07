#include <cstdio>
#include <cstring>
#include <algorithm>  
 
using namespace std;
const int N = 110;
 
int a[N];
int b[N];
 
int main()
{
    int n;
    int cnt = 0;
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        if(cnt++ != 0)
            printf("\n");
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        int aver = sum / n;
        for(int i=0; i<n; i++)
            b[i] = a[i] - aver;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(b[i] > 0)
            {
                ans += b[i];
            }
        }
        printf("%d\n", ans);
    }
    
 
    return 0;
}