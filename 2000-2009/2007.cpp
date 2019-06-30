// 此题有坑，默认输入的两个数并不一定是小的在前大的在后
// 忘记删除测试行导致错了好几发

#include <cstdio>
using namespace std;


int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        if(n > m)
            n^=m^=n^=m;
        long long mul2 = 0;
        long long mul3 = 0;
        for(int i=n; i<=m; i++)
        {
            if(i%2 == 1)
                mul3 += 1ll * i*i*i;
            else
            {
                mul2 += 1ll*i*i;
            }
            
        }
        printf("%lld %lld\n", mul2, mul3);
    }


    return 0;
}