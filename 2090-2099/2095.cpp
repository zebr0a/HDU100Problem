#include <bits/stdc++.h>

using namespace std;
const int N = 1000010;
typedef pair<int, int> P;

map<int, int> mp;
vector<P> ve;

bool cmp(P p1, P p2)
{
    return p1.second < p2.second;
}

int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        mp.clear();
        ve.clear();
        int num;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &num);
            mp[num] ++;
        }
        int len = mp.size();
        P p;
        map<int, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            ve.push_back(P(it->first, it->second));
        }
        sort(ve.begin(), ve.end(), cmp);
        printf("%d\n", ve[0].first);
    }    


    return 0;
}