#include <cstdio>
#include <map>

using namespace std;
map<char, int> ma;

void init()
{
    ma.clear();
    int cnt = -1;
    for(int i='a'; i<='z'; i++)
    {
        ma[i] = cnt--;
    }
    cnt = 1;
    for(int i='A'; i<='Z'; i++)
    {
        ma[i] = cnt++;
    }
}
int main()
{
    init();
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char ch;
        int y;
        scanf("%c %d", &ch, &y);
        getchar();
        printf("%d\n", ma[ch] + y);
    }

    return 0;
}