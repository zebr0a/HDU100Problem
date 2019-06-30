#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    while(cin >> s)
    {
        sort(s.begin(), s.end());
        cout << s[0] << " " << s[1] << " " << s[2] << endl;
    }
    

    return 0;
}