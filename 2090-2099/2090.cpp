#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string name;
    double cnt, price;
    double sum = 0;
    while(cin >> name >> cnt >> price)
    {
        sum += cnt * price;
    }
    printf("%.1lf\n", sum);


    return 0;
}