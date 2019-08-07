#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 1010;

char s[N], p[N];
int nexts[N];

void getnext()
{
    int plen = strlen(p);
    nexts[0] = -1;
    int k = -1;
    int j = 0;

    while(j < plen - 1)
    {
        if(k == -1 || p[j] == p[k])
        {
            k ++;
            j ++;
            nexts[j] = k;
        }
        else 
            k = nexts[k];
    }
}

int kmp()
{
    int i = 0;
    int j = 0;
    int slen = strlen(s);
    int plen = strlen(p);
    int ans = 0;
    while(i < slen && j < plen)
    {
        if(j == -1 || s[i] == p[j])
        {
            i ++;
            j ++;
        }
        else
            j = nexts[j];

        if(j == plen)
        {
            ans ++;
            j = 0;
            // i ++;
            // printf("i = %d\n", i);
        }
    }
    return ans;

}

int main()
{
    while(scanf("%s", s))
    {
        if(strcmp(s, "#") == 0) break;
        scanf("%s", p);
        getnext();
        printf("%d\n", kmp());
        
    }


    return 0;
}