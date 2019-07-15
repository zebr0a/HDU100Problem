#include <cstdio>
#include <iostream>
#include <string>
#include <set>

using namespace std;

set<char> s1, s2, s3, s4;

int main()
{
    ios::sync_with_stdio(0);
    s1.clear(); s2.clear(); s3.clear(); s4.clear();
    for(int i='a'; i<='z'; i++)
        s1.insert(i);
    for(int i='A'; i<='Z'; i++)
        s2.insert(i);
    for(int i='0'; i<='9'; i++)
        s3.insert(i);
    s4.insert('~'); s4.insert('!'); s4.insert('@');
    s4.insert('#'); s4.insert('$'); s4.insert('%');
    s4.insert('^');

    int m; 
    string str;
    cin >> m;
    while(m--)
    {
        cin >> str;
        int cnt = 0;
        bool f1, f2, f3, f4;
        f1 = f2 =f3 = f4 = 1;
        int len = str.size();
        for(int i=0; i<len; i++)
        {
             if(f1 && s1.count(str[i]))
             {
                 f1 = false;
                 cnt ++;
             }
             if(f2 && s2.count(str[i]))
             {
                 f2 = false;
                 cnt ++;
             }
             if(f3 && s3.count(str[i]))
             {
                 f3 = false;
                 cnt ++;
             }
             if(f4 && s4.count(str[i]))
             {
                 f4 = false;
                 cnt ++;
             }
        }
        if(cnt >= 3 && len >= 8 && len <= 16)
           cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
        
    }



    return 0;
}