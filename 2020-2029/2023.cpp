// 先记录数据，然后逐步求解
// abcd命名法危害很大，一个不注意就搞混乱了
// 如果不写注释千万少用abcd命名法

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int a[50+7][5+7];   // 成绩单
double b[50+7];     // 学生平均成绩
double c[5+7];      // 学科平均成绩
int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        for(int i=0; i<n; i++)
        {
            b[i] = 0;
            for(int j=0; j<m; j++)
            {
                scanf("%d", &a[i][j]);
                b[i] += a[i][j];
            }
            b[i] = 1.0 * b[i] / m;
        }
        memset(c, 0, sizeof(c));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                c[i] += a[j][i];
            }
            c[i] = 1.0 * c[i] / n;
        }

        for(int i=0; i<n-1; i++)
        {
            printf("%.2lf ", b[i]);
        }
        printf("%.2lf\n", b[n-1]);
        for(int i=0; i<m-1; i++)
        {
            printf("%.2lf ", c[i]);
        }
        printf("%.2lf\n", c[m-1]);

        int cnt = 0;
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            flag = true;
            for(int j=0; j<m; j++)
            {
                if(1.0 * a[i][j] < c[j])
                {
                    // printf("%d %lf Here\n", a[i][j], c[j]);
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
            
        }
        printf("%d\n", cnt);
        puts("");
    }



    return 0;
}