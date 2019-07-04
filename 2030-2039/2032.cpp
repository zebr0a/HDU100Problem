#include <cstdio>
using namespace std;

int a[100][100];
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
        {
            a[i][0] = 1;
            a[i][i] = 1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<i; j++)
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            printf("%d", a[i][0]);
            for(int j=1; j<=i; j++)
            {
                printf(" %d", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}