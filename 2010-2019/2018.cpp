#include <cstdio>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        int x1, x2, x3, x4;
        x1 = x2 = x3 = x4 = 0;
        x4 = 1;
        for(int i=1; i<n; i++)
        {
            int tmp1 = x1;
            int tmp2 = x2;
            x4 = x3 + x4;
            x1 = x4;
            x2 = tmp1;
            x3 = tmp2;
        }
        printf("%d\n", x1+x2+x3+x4);
    }


    return 0;
}