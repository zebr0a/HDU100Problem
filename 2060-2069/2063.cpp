#include <cstdio>
#include <cstring>

using namespace std;
const int MAXN = 500+7;

int k, male, female;
int line[MAXN][MAXN];
int used[MAXN], man[MAXN];

int find(int x)
{
    for(int i=1; i<=male; i++)
    {
        if(used[i]==0 && line[x][i])
        {
            used[i] = 1;
            if(man[i]==0 || find(man[i]))
            {
                man[i] = x;
                return 1;
            }
        }
    }
    return 0; 
}

int main()
{
    while(scanf("%d", &k), k)
    {
        memset(line, 0, sizeof(line));
        memset(man, 0, sizeof(man));
        scanf("%d %d", &female, &male);
        int f, m;
        for(int i=0; i<k; i++)
        {
            scanf("%d %d", &f, &m);
            line[f][m] = 1;
        }
        int sum = 0;
        for(int i=1; i<=female; i++)
        {
            memset(used, 0, sizeof(used));
            if(find(i))
                sum ++;
        }
        printf("%d\n", sum);
    }

    return 0;
}