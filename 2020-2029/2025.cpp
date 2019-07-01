// 找到最大字符所在的位置，然后遍历到这个位置时就输出（max）
// 并不需要真的插入

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    while(cin >> s)
    {
        int len = s.size();
        char maxs = '\0';
        for(int i=0; i<len; i++)
        {
            if(s[i] > maxs)
                maxs = s[i];
        }
        for(int i=0; i<len; i++)
        {
            cout << s[i];
            if(s[i] == maxs)    cout << "(max)";
        }
        cout << endl;
    }


    return 0;
}