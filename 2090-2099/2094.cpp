#include <bits/stdc++.h>

using namespace std;

map<string, int> ma;
set<string> s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();
    int n;
    while(cin >> n, n)
    {
        ma.clear();
        s.clear();
        string a, b;

        for(int i=0; i<n; i++)
        {
            cin >> a >> b;
            s.insert(a);
            s.insert(b);
            ma[b] ++;
        }
        if(s.size() - ma.size() == 1)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }


    return 0;
}