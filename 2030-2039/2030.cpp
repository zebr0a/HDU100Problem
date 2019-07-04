// 一个汉字占两个字符，且汉字的编码不论是高位还是低位都小于0

#include <cstdio>
#include <cstring>

using namespace std;

char str[1000000];

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(str);
        int len = strlen(str);
        int cnt = 0;
        for(int i=0; i<len; i++)
        {
            if(str[i] < 0)
                cnt++;
        }
        printf("%d\n", cnt/2);
    }



    return 0;
}