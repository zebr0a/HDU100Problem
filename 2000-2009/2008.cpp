#include <cstdio>
using namespace std;


int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        double num;
        int sum0, sum1, sum2;
        sum0 = sum1 = sum2 = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%lf", &num);
            if(num < 0)
                sum0 ++;
            else if(num == 0)
                sum1 ++;
            else
                sum2 ++;
        }
        printf("%d %d %d\n", sum0, sum1, sum2);
    }


    return 0;
}