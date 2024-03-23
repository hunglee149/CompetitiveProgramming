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
char c[1000][1000];
bool visited[1000][1000];

int duongDi[1000][1000];

ii path[] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

string s = "URDL";

int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

    cin >> n >> m;

    queue<ii> q;
    ii begin, end;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> c[i][j];
            if (c[i][j] == 'A') 
            {
                begin = {i, j};
            } 
            else if (c[i][j] == 'B') 
            {
                end = {i, j};
            }
        }
    }

    q.push(begin);
    visited[begin.fi][begin.se] = true;

    while (!q.empty()) 
    {
        auto u = q.front(); q.pop();
        for (int i = 0; i < 4; i++) 
        {
            ii v = {u.fi + path[i].fi, u.se + path[i].se};
            if (v.fi < 0 || v.fi >= n || v.se < 0 || v.se >= m) continue;
            if (visited[v.fi][v.se]) continue;
            if (c[v.fi][v.se] == '#') continue;
            visited[v.fi][v.se] = true;
            duongDi[v.fi][v.se] = i;
            q.push(v);
        }
    }

    if (visited[end.fi][end.se]) 
    {
        cout << "YES" << endl;
        vector<int> steps;
        while (end != begin) 
        {
            int p = duongDi[end.fi][end.se];
            cout << end.fi << " " << end.se << "\n";
            steps.push_back(p);
            end = {end.fi - path[p].fi, end.se - path[p].se};
        }

        cout << end.fi << " " << end.se << "\n";
        reverse(all(steps));

        cout << steps.size() << endl;
        for (char c : steps) 
        { 
            cout << s[c]; 
        }
        cout << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
    return 0;
}