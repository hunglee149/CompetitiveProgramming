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
vector<int> adj[100005];
bool visited[100005];
 
void dfs(int u)
{
    visited[u] = true;
    for (auto it: adj[u])
    {
        if (!visited[it])
        {
            dfs(it);
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
 
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
 
    vector<int> v;
 
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            v.pb(i);
            dfs(i);
        }
    }
 
    cout << v.size() - 1 << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " " << v[i + 1] << endl;
    }
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
