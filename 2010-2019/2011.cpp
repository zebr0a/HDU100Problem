#include <cstdio>

using namespace std;

int main()
{
    int m;
    scanf("%d", &m);
    while(m--)
    {
        int n;
        scanf("%d", &n);
        double sum = 0;
        int flag = 1;
        for(int i=1; i<=n; i++)
        {
            sum += 1.0 * flag / i;
            flag = -flag;
        }
        printf("%.2lf\n", sum);
    }


    return 0;
}