#include <bits/stdc++.h>
 
using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;
 
#define io ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define fi first
#define se second
#define pb push_back
#define task "hli"
#define endl '\n'
#define Set(A, n) memset(A, n, sizeof(A))
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
 
const int maxn = 10000000;
const int MOD = 1000000007;
 
int n, m;
bool visited[200005];
int parent[200005];
 
vector<int> adj[200005];
vector<int> res;
 
void init()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
 
    for (int i = 1; i <= n; i++)
    {
        sort(all(adj[i]));
    }
}
 
void bfs(int u)
{
    Set(visited, false);
    Set(parent, 0);
    parent[u] = 1;
 
    queue<int> q;
    q.push(u);
 
    visited[u] = true;
 
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
 
        for (auto it: adj[top])
        {
            if (!visited[it])
            {
                q.push(it);
                parent[it] = top;
                visited[it] = true;
            }
        }
    }
}
 
int main()
{
    io
 
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    init();
    bfs(1);
 
    if (!visited[n]) cout << "IMPOSSIBLE";
    else
    {
        while (n != parent[n])
        {
            res.pb(n);
            n = parent[n];
        }
        res.pb(n);
        reverse(all(res));
        cout << res.size() << endl;
        for (auto it: res) cout << it << " ";
    }
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}