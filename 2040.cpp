#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        int sum1, sum2;
        sum1 = sum2 = 0;
        int n1 = num1/2;
        for(int i=1; i<=n1; i++)
        {
            if(num1 % i == 0)
            {
                sum1 += i;
            }
                
        }
        int n2 = num2/2;
        for(int i=1; i<=n2; i++)
        {
            if(num2 % i == 0)
                sum2 += i;
        }
        // printf("%d %d\n", sum1, sum2);
        if(sum1 == num2 && sum2 == num1)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}