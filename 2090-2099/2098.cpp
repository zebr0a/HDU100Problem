#include <bits/stdc++.h>

using namespace std;
const int N = 10010;

int prime[N];

void init()
{
    prime[0] = prime[1] = 1;
    int len = sqrt(N+1);
    for(int i=2; i<len; i++)
    {
        if(!prime[i])
            for(int j=i+i; j<N; j += i)
                prime[j] = 1;
    }
}

int main()
{
    init();
    int num;
    while(scanf("%d", &num), num)
    {
        int ans = 0;
        int i = 1, j = num - 1;
        while(i < j)
        {
            if(i + j == num && !prime[i] && !prime[j])
            {
                ans ++;
                i ++;
                j --;
            }
            else if(i + j < num)
                i++;
            else 
                j--;
        }
        printf("%d\n", ans);
    }



    return 0;
}