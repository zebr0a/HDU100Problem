#include <bits/stdc++.h>

using namespace std;

vector<int> ve;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b), a+b)
    {
        ve.clear();
        for(int i=0; i<100; i++)
        {
            if((a * 100 + i) % b == 0)
                ve.push_back(i);
        }
        int vlen = ve.size();
        for(int i=0; i<vlen; i++)
        {
            if(ve[i] < 10)
                printf("0%d%c", ve[i], i == vlen-1 ? '\n' : ' ');
            else
                printf("%d%c", ve[i], i == vlen-1 ? '\n' : ' ');
        }
    }


    return 0;
}