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

ii path[] = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}};

int n;
char a[3][200005];
int visited[3][200005];

void init()
{
    cin >> n;
    
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    Set(visited, 0);
}

void bfs(int u, int v)
{
    queue<ii> q;
    q.push({u, v});
    visited[u][v] = 1;
    while (!q.empty())
    {
        auto top = q.front();
        int i = top.fi, j = top.se;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int i1 = i + path[k].fi;
            int j1 = j + path[k].se;

            if (i1 <= 0 || i1 > 2 || j1 <= 0 || j1 > n) continue;
            if (!visited[i1][j1])
            {
                visited[i1][j1] = 1;
                if (a[i1][j1] == '<')
                {
                    --j1;
                    if (!visited[i1][j1]) visited[i1][j1] = 1;
                    q.push({i1, j1});
                }
                else
                {
                    ++j1;
                    if (!visited[i1][j1]) visited[i1][j1] = 1;
                    q.push({i1, j1});
                }
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

    int t; cin >> t;
    while (t--)
    {
        init();
        bfs(1, 1);
        if (visited[2][n]) cout << "YES\n";
        else cout << "NO\n";
    }
    

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}