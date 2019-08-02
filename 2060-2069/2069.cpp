#include <bits/stdc++.h>

using namespace std;

int a[] = {50, 25, 10, 5, 1};

int main()
{
    int money;
    while(scanf("%d", &money) != EOF)
    {
        int ans = 0;
        for(int i=0; i<=100; i++)
        {
            if(i*50 > money)    break;
            for(int j=0; j<=100-i; j++)
            {
                if(i*50 + j*25 > money) break;
                for(int k=0; k <= 100 -i -j; k++)
                {
                    if(i*50 + j*25 + k*10 > money)  break;
                    for(int h=0; h <= 100 -i -j -k; h++)
                    {
                        if(i*50 + j*25 + k*10 + h*5 > money)    break;
                        for(int u=0; u <= 100 -i -j -k -h; u++)
                        {
                            if(i*50 + j*25 + k*10 + h*5 + u*1 > money)
                                break;
                            if(i*50 + j*25 + k*10 + h*5 + u*1 == money)
                            {
                                ans ++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", ans);
    }



    return 0;
}