#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 1005;
const int maxm = 10005;
struct e {// 边 
    int u, v, w;
    bool operator <(e a) { return w < a.w; }
}edge[maxm];

int n, m, k, cnt;
int fa[maxn]; //并查集 
int find(int x) {
    if (x == fa[x]) return x;
    fa[x] = find(fa[x]);
    return fa[x];
}
int kruskal() {// kruskal建最小生成树 
    int res = 0, nft = n;
    for (int i = 1;i <= n;i++) fa[i] = i;// 隶属集合初始化 
    sort(edge + 1, edge + m + 1);
    for (int i = 1;i <= m;i++) {
        if (nft <= k) break;// 是否已经建了k棵最小生成树 ，如果n<=k 则无法连成k个棉花糖 
        int fu = find(edge[i].u);//(为什么是最小生成树,可能有的人不清楚，日后我将在博客里专门
        int fv = find(edge[i].v);//         写一点关于最小生成树的东西,有兴趣的同学可以去看看） 
        if (fu != fv) {
            fa[fu] = fv;
            res += edge[i].w;
            nft--;
        }
    }
    if (nft == k) return res;// 能建成，返回花费，否则返回-1 
    return -1;
}
int main() {
    int u, v, w, ans;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1;i <= m;i++)
        scanf("%d%d%d", &edge[i].u, &edge[i].v, &edge[i].w);
    ans = kruskal();
    if (ans == -1) puts("No Answer");else printf("%d", ans);
}