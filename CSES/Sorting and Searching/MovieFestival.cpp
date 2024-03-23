#include <bits/stdc++.h>
 
using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;
 
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
#define task "hli"
#define endl '\n'
#define all(a) a.begin(), a.end()
 
const int maxn = 1e7;
const int MOD = 1e9 + 7;
 
bool cmp(ii A, ii B)
{
    if (A.se != B.se) return A.se < B.se;
    return A.fi < B.fi;
}
 
int main()
{
    faster
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    int n; cin >> n;
 
    vector<ii> v;
 
    for (int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        v.pb({a, b});
    }
    
    sort(all(v), cmp);
 
    int cnt = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].fi >= cur)
        {
            cnt++;
            cur = v[i].se;
        }
    }
    
    cout << cnt;
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}