// 又踩坑了，不知道出题人有没有想到这个坑
// 交换的时候不能使用异或，否则当只有一个数的的时候就变成0了
// 一个也不准确，具体来说是MinIndex不能和他交换的数的下标相等，否则会出0错误

#include <cstdio>
using namespace std;

int a[100+7];
int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        int MinIndex = 0;
        for(int i=1; i<n; i++)
        {
            if(a[MinIndex] >= a[i])
                MinIndex = i;
        }
        if(MinIndex != 0)
            a[0]^=a[MinIndex]^=a[0]^=a[MinIndex];
        // int tmp = a[0];
        // a[0] = a[MinIndex];
        // a[MinIndex] = tmp;
        for(int i=0; i<n-1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }


    return 0;
}