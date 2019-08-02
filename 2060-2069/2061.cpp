#include <cstdio>
#include <cstring>
using namespace std;

struct node{
    char cname[30+7];
    double credit;
    double score;
};
struct node a[100000+7];

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int k;
        scanf("%d", &k);
        double tc = 0, ts = 0; // 记录学分，学分*成绩的总和
        bool flag = false;
        for(int i=0; i<k; i++)
        {
            scanf("%s %lf %lf", &a[i].cname, &a[i].credit, &a[i].score);
            tc += a[i].credit;
            if(a[i].score < 60)
                flag = true;
        }
        if(flag)
            printf("Sorry!\n");
        else
        {
            for(int i=0; i<k; i++)
            {
                ts += a[i].credit * a[i].score;
            }
            double ans = 1.0 * ts / tc;
            printf("%.2lf\n", ans);
        }
        if(n != 0)
            printf("\n");
        
    }


    return 0;
}