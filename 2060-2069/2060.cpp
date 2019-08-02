#include <cstdio>

using namespace std;

int ball[10] = {0};

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int b, p ,o; // 剩余球的数量，自己得分，对手得分
        scanf("%d %d %d", &b, &p, &o);
        if(b >= 7)
        {
            p += (b-6) + (b-6) * 7;
            for(int i=2; i<=7; i++)
                p += i;
        }
        else if(b < 7)
        {
            for(int i=7; i>7-b; i--)
                p += i;
        }
        if(p >= o)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}
