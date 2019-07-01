#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int i = 0, j = len-1;
        while(i < j)
        {
            if(s[i] != s[j])    // 不能写 s[i++] != s[j--]
                break;
            i++, j--;
        }
        if(i >= j)
            cout<<"yes"<<endl;
        else
        {
            cout << "no" << endl;
        }
        
        
    }


    return 0;
}