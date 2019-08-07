#include <bits/stdc++.h>

using namespace std;

string s, s1;
map<string, int> mp;

int main()
{
    ios::sync_with_stdio(0);
    while(getline(cin , s))
    {
        if(s == "#")
            break;
        s1.clear();
        mp.clear();
        int slen = s.size();
        for(int i=0; i < slen; i++)
        {
            if(s[i] != ' ')
            {
                s1.push_back(s[i]);
            }
            else if(s1.size() != 0)
            {
                // cout << "s1 = " << s1 << endl;
                mp[s1] ++;
                s1.clear();
            }
        }
        if(s1.size() != 0)
            mp[s1] ++;

        cout << mp.size() << endl;
    }



    return 0;
}