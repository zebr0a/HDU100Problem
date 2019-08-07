#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << 6;
        for(int i = s.size() - 6+1; i<s.size(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }


    return 0;
}