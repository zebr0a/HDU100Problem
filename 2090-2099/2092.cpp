#include <cstdio>
#include <cmath>

using namespace std;


int main()
{   
    int n, m;
    while(scanf("%d %d", &n, &m), n+m)
    {
        int diet = n*n - 4*m;
        // printf("diet = %d\n", diet);
        if(diet < 0)
            printf("No\n");
        else
        {
            int x1 = (n + sqrt(diet)) / 2;
            int x2 = (n - sqrt(diet)) / 2;
            int y1 = n - x1;
            int y2 = n - x2;
            // printf("x1=%d y1=%d\n", x1, y1);
            // printf("x2=%d y2=%d\n", x2, y2);
            if(x1 + y1 == n && x1 * y1 == m || x2 + y2  == n && x2 * y2 == m)
                printf("Yes\n");
            else 
                printf("No\n");
        }
        
    }


    return 0;
}