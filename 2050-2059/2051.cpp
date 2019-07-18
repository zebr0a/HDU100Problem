// 十进制到二进制得转换
#include <cstdio>
#include <stack>

using namespace std;

stack<int> s;
void change(int n)
{
    do{
        s.push(n%2);
        n /= 2;
    }while(n);
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        while(!s.empty()) s.pop();
        change(n);        
        while(!s.empty())
        {
            printf("%d", s.top());
            s.pop();
        }
        printf("\n");
    }


    return 0;
}