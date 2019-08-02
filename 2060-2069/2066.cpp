#include <cstdio>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 1010;

struct edge{
    int to, cost;   // to是到达的点，cost是对应的权值
};
typedef pair<int, int> P;   // first是最小权值，second是顶点编号
vector<edge> G[N];
int dis[N];

int t, s, d;

void djk(int s)
{
    priority_queue<P, vector<P>, greater<P> > q;    // 优先队列，权值越小优先级越高
    for(int i=0; i<N; i++)  // 初始化
        dis[i] = INF;
    dis[s] = 0;
    
    q.push(P(0, s));    // 把起点放入队列中
    while(!q.empty())
    {
        P p = q.top();  q.pop();
        int v = p.second;
        if(dis[v] < p.first)    continue;
        for(int i=0; i<G[v].size(); i++)    // 遍历当前顶点所能到达的所有顶点
        {
            edge e = G[v][i];
            if(dis[e.to] > dis[v] + e.cost) // 如果到下一个点的距离大于通过当前这个点到下一个点的距离，就更新下一个点的最小距离
            {
                dis[e.to] = dis[v] + e.cost;
                q.push(P(dis[e.to], e.to)); // 更新后放入队列中
            }
        }
    }
}

int maps[N][N]; // 用于辅助的邻接矩阵，方便去掉重边

int main()
{
    while(scanf("%d %d %d", &t, &s, &d) != EOF)
    {
        for(int i=0; i<N; i++)  G[i].clear();
        
        int a;
        edge b;

        for(int i=0; i<N; i++)  
            for(int j=0; j<N; j++)
                maps[i][j] = INF;
        
        for(int i=0; i<t; i++)
        {
            scanf("%d %d %d", &a, &b.to, &b.cost);
            // G[a].push_back(b);   
            // a可能到b，b也可能到a，而且权值可能不一样
            maps[a][b.to] = maps[b.to][a] = min(min(maps[a][b.to], maps[b.to][a]), b.cost); // 去重边
        }

        for(int i=0; i<N; i++)  // 把边从邻接矩阵中读入邻接表
        {
            for(int j=0; j<N; j++)
            {
                if(maps[i][j] != INF)
                {
                    b.to = j;
                    b.cost = maps[i][j];
                    G[i].push_back(b);
                }
            }
        }


        for(int i=0; i<s; i++)
        {
            scanf("%d", &b.to);
            b.cost = 0;
            G[0].push_back(b);
        }
        djk(0);
        int ans = INF;
        for(int i=0; i<d; i++)
        {
            scanf("%d", &a);
            ans = min(ans, dis[a]);
        }
        printf("%d\n", ans);
    }

    return 0;
}
