// 巨坑，此代码不要用g++提交，否则准WA
// 用C++提交AC
// 原因可能是g++对一些函数什么的标准与C++不一样
// 直觉告诉我是getline()的锅，原因是我之前在pta上做练习时g++不支持getline


#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{  
    ios::sync_with_stdio(false);
    string s;
    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        getline(cin, s);
        int len = s.size();
        bool flag = true;
        if(s[0] != '_' && !(s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && s[0] <= 'Z'))
        {
            flag = false;
        }        
       
        for(int i=1; i<len; i++)
        {
            if(s[i] != '_' && !(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= '0' && s[i] <= '9'))
            {
                flag = false;
                break;
            }
        }
        if(flag)    cout<<"yes" << endl;
        else        cout << "no" << endl;
        
    }

    return 0;
}