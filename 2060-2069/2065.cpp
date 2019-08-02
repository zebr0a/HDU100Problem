#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int mod = 100;
typedef long long LL;

struct matrix{
    int m[4][4];
};
const matrix E = {  // 某个矩阵的0次幂是单位矩阵
    1, 0, 0 ,0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1,
};
const matrix P = {
    2, 1, 1, 0,
    1, 2, 0, 1,
    1, 0, 2, 1,
    0, 1, 1, 2,
};

matrix multi(const matrix &a, const matrix &b)  // 矩阵乘法
{
    matrix c;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            c.m[i][j] = 0;
            for(int k=0; k<4; k++)
                c.m[i][j] = (c.m[i][j] + a.m[i][k] * b.m[k][j]) % mod;
        }
    }
    return c;
}

matrix pow_mod(LL n)    // 快速幂运算
{
    matrix res = E, a = P;
    while(n)
    {
        if(n&1)
            res = multi(res, a);
        a = multi(a, a);
        n = n/2;
    }
    return res;
}


int main()
{
    int t;
    while(scanf("%d", &t), t)
    {
        for(int i=1; i<=t; i++)
        {
            LL n;
            scanf("%lld", &n);
            printf("Case %d: %d\n", i, pow_mod(n).m[0][0]);
        }
        puts("");
        
    }

    


    return 0;
}