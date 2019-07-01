// 每个单词前都有一个空格，第一个字母单独处理

#include <cstdio>
#include <cstring>

using namespace std;

char str[100+7];
int main()
{   
    while(gets(str))
    {
        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] -= ('a' - 'A');
        int len = strlen(str);
        for(int i=1; i<len; i++)
        {
            if(str[i-1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 'a' - 'A';
        }

        printf("%s\n", str);
    }


    return 0;
}