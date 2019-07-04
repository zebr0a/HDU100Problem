#include <cstdio>
#include <stack>

using namespace std;

stack<int> s;

void change(int n, int r)
{
    if(n == 0)
    {
        s.push(0);
        return;
    }
    if(n < 0)   // 这里需要修改符号 不然取余会出现负数
        n = -n;
    while(n)
    {
        s.push(n%r);
        n /= r;
    }
}
int main()
{
    int n, r;
    while(scanf("%d %d", &n, &r) != EOF)
    {
        while(!s.empty()) s.pop();
        change(n, r);

        if(n < 0)   
            printf("-");
        while(!s.empty())
        {
            switch(s.top())
            {
                case 10: printf("A"); break;
                case 11: printf("B"); break;
                case 12: printf("C"); break;
                case 13: printf("D"); break;
                case 14: printf("E"); break;
                case 15: printf("F"); break;
                default: printf("%d", s.top());
            }
            s.pop();
        }
        puts("");
    }


    return 0;
}