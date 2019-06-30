#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int num;
        long long mul = 1;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &num);
            if(num%2 == 1)
                mul *= num;
        }
        printf("%lld\n", mul);
    }


    return 0;
}