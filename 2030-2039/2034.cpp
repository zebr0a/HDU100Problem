/* 在集合A中去除B中的元素，然后排序输出
   因为看题不认真，没看到从小到大输出，理所当然的认为是保持原有的顺序，WA了一发 */

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
const int INF = 0x3f3f3f3f;

vector<int> v1;
vector<int> v2;
int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m), n||m)
    {
        int num;
        v1.clear();
        v2.clear();
        for(int i=0; i<n; i++)
        {
            scanf("%d", &num);
            v1.push_back(num);
        }
        for(int i=0; i<m; i++)
        {
            scanf("%d", &num);
            v2.push_back(num);
        }
        

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v1[j] == v2[i])
                    v1[j] = INF;
            }
        }
        sort(v1.begin(), v1.end());
        bool flag = false;
        for(int i=0; i<n; i++){
            if(v1[i] != INF){
                printf("%d ", v1[i]);
                flag = true;
            }
        }
        if(!flag)
            printf("NULL");
        printf("\n");
    }

    return 0;
}