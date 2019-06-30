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
        int cnt = 0;
        int len = s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
                cnt ++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}