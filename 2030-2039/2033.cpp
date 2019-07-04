#include <cstdio>
using namespace std;

int main()
{
    int ah, am, as;
    int bh, bm, bs;
    int ans[3];
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &ah, &am, &as);
        scanf("%d %d %d", &bh, &bm, &bs);
        int tmp = (as + bs) / 60;
        ans[2] = (as + bs) % 60;
        int tmp2 = (am + bm + tmp) / 60;
        ans[1] = (am + bm + tmp) % 60;
        ans[0] = ah + bh + tmp2;

        printf("%d %d %d\n", ans[0], ans[1], ans[2]);
    }



    return 0;
}