#include <cstdio>
#include <iostream>
#include <string>
#include <stack>

using namespace std;
typedef long long LL;

LL pow16(int n) // 返回16的n次幂
{
    LL res = 1;
    for(int i=0; i<n; i++)
        res = res * 16;
    return res;
}

LL fun1(string str)  // 十六进制转成十进制
{
    LL res = 0;
    int cnt = 0;
    for(int i=str.size()-1; i>0; i--)
    {
        if(str[i] == 'A')
            res += 10 * pow16(cnt++);
        else if(str[i] == 'B')
            res += 11 * pow16(cnt++);
        else if(str[i] == 'C')
            res += 12 * pow16(cnt++);
        else if(str[i] == 'D')
            res += 13 * pow16(cnt++);
        else if(str[i] == 'E')
            res += 14 * pow16(cnt++);
        else if(str[i] == 'F')
            res += 15 * pow16(cnt++);
        else
        {
            res += (str[i] - '0') * pow16(cnt++);
        }
    }
    if(str[0] == '-')   // 判断是否带符号
        res = -res;
    else if(str[0] != '-' && str[0] != '+')
    {
        if(str[0] == 'A')
            res += 10 * pow16(cnt++);
        else if(str[0] == 'B')
            res += 11 * pow16(cnt++);
        else if(str[0] == 'C')
            res += 12 * pow16(cnt++);
        else if(str[0] == 'D')
            res += 13 * pow16(cnt++);
        else if(str[0] == 'E')
            res += 14 * pow16(cnt++);
        else if(str[0] == 'F')
            res += 15 * pow16(cnt++);
        else
        {
            res += (str[0] - '0') * pow16(cnt++);
        }
    }
    return res;
}

stack<int> s;   // 保存二进制数
void fun2(LL num)   // 十进制转二进制
{
    if(num < 0) num = -num; // 转换期间不考虑符号
    while(!s.empty()) s.pop();
    do{
        s.push(num%2);
        num /= 2;
    }while(num);
    int len = s.size();
    while(s.size() % 4 != 0)    // 不是4的整数倍，添加前导0
        s.push(0);
}

int main()
{
    ios::sync_with_stdio(0);
    string a, b;
    while(cin >> a >> b)
    {
        LL sum = fun1(a) + fun1(b); // 先转化为10进制，然后求和
        fun2(sum);      // 转化为二进制，先不考虑符号
        
        if(sum < 0) printf("-");
        while(!s.empty())       // 二进制转16进制
        {
            int x1 = s.top();   s.pop();
            int x2 = s.top();   s.pop();
            int x3 = s.top();   s.pop();
            int x4 = s.top();   s.pop();
            int ans = x4 + x3*2 + x2*2*2 + x1*2*2*2;
            if(ans == 10)   printf("A");
            else if(ans == 11)  printf("B");
            else if(ans == 12)  printf("C");
            else if(ans == 13)  printf("D");
            else if(ans == 14)  printf("E");
            else if(ans == 15)  printf("F");
            else
            {
                printf("%d", ans);
            }
        }
        printf("\n");

    }
    

    return 0;
}

// #include <cstdio>
// using namespace std;
// typedef long long LL;

// int main()
// {
//     LL a, b;
//     while(scanf("%llX %llX", &a, &b) != EOF)
//     {
//         LL sum = a + b;
//         if(sum < 0)
//         {
//             printf("-");
//             sum = -sum;
//         }
            
//         printf("%llX\n", sum);
//     }



//     return 0;
// }