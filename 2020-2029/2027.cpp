// 扫面统计就行了
#include <cstdio>
#include <cstring>

using namespace std;

char str[100+7];
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(str);
        int num[6];
        memset(num, 0, sizeof(num));
        int len = strlen(str);
        for(int i=0; i<len; i++)
        {
            switch(str[i])
            {
                case 'a': num[1]++; break;
                case 'e': num[2]++; break;
                case 'i': num[3]++; break;
                case 'o': num[4]++; break;
                case 'u': num[5]++; break;
            }
        }
        printf("a:%d\n", num[1]);
        printf("e:%d\n", num[2]);
        printf("i:%d\n", num[3]);
        printf("o:%d\n", num[4]);
        printf("u:%d\n", num[5]);
        if(t != 0)
            puts("");

    }


    return 0;
}