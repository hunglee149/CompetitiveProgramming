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
 
int n, m, cnt = 0;
bool visited[1005][1005];
 
char a[1005][1005];
 
ii path[] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 
bool isValid (int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m || a[x][y] == '#')
        return false;
    return true;
}
 
void init()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
 
    Set(visited, false);
}
 
void dfs(int u, int v)
{
    visited[u][v] = true;
 
    for (int k = 0; k < 4; k++)
    {
        int i = u + path[k].fi;
        int j = v + path[k].se;
        if (isValid(i, j))
        {
            if (!visited[i][j])
            {
                dfs(i, j);
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
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '.' && !visited[i][j])
            {
                dfs(i, j);
                ++cnt;
            }
        }
    }
 
    cout << cnt << endl;
 
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
