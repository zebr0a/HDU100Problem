#include <bits/stdc++.h>

using namespace std;

stack<int> s12;
stack<int> s16;


void trans12(int x)
{
    while(!s12.empty()) s12.pop();
    while(x)
    {
        s12.push(x%12);
        x /= 12;
    }
}

void trans16(int x)
{
    while(!s16.empty()) s16.pop();
    while(x)
    {
        s16.push(x%16);
        x /= 16;
    }
}


int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        int x = n;
        int sum10 = 0;
        int sum12 = 0;
        int sum16 = 0;

        while(x)
        {
            sum10 = sum10 + x%10;
            x /= 10;
        }
        trans12(n);
        trans16(n);
        while(!s12.empty())
        {
            sum12 += s12.top();
            s12.pop();
        }
        while(!s16.empty())
        {
            sum16 += s16.top();
            s16.pop();
        }
        if(sum10 == sum12 && sum12 == sum16)
        {
            printf("%d is a Sky Number.\n", n);
        }
        else 
            printf("%d is not a Sky Number.\n", n);
    }


    return 0;
}