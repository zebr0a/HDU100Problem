#include <bits/stdc++.h>

using namespace std;

int D[10];
int n, k;
int sum = 0;

// 第一个参数是已选学分总数，第二个参数是第几个学分的课
void dfs(int s, int t)
{
    int i, j;
    if(s > n)   return;
    if(s == n)  sum ++;
    for(int i=t+1; i<10; i++)   // 遍历学分数
    {
        for(int j=1; j <= D[i]; j++)    // 遍历每种学分的课程数
        {
            dfs(s + i*j, i);
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        
        scanf("%d %d", &n, &k);
        int a, b;
        for(int i=0; i<k; i++)
        {
            scanf("%d %d", &a, &b);
            D[a] = b;
        }
        sum = 0;
        dfs(0, 0);
        printf("%d\n", sum);


    }



    return 0;
}