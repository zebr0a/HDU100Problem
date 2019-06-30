#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ve;
int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m), n||m)
    {
        int num;
        ve.clear();
        for(int i=0; i<n; i++)
        {
            scanf("%d", &num);
            ve.push_back(num);
        }
        sort(ve.begin(), ve.end());
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(ve[i] > m)
            {
                ve.insert(ve.begin() + i, m);
                flag = true;
                break;
            }
        }
        if(!flag)
            ve.push_back(m);
        for(int i=0; i<n+1-1; i++)
        {
            printf("%d ", ve[i]);
        }
        printf("%d\n", ve[n]);
    }


    return 0;
}