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
 
struct Fenwick 
{
    int n;
    vector <ll> f;
    Fenwick(int _n) 
    {
        n = _n;
        f.resize(_n + 5);
    }
 
    ll qry(int x) 
    {
        ll ans = 0;
        for (; x > 0; x -= x & (-x))
            ans += f[x];
        return ans;
    }
 
    ll qry(int l, int r) { return qry(r) - qry(l - 1); }
 
    void upd(int x, int val) 
    {
        for (; x <= n; x += x & (-x))
            f[x] += val;
    }
};
 
int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    int n, q; cin >> n >> q;
    vector<int> a(n + 5);
    
    for (int i = 1; i <= n; i++) cin >> a[i];
 
    Fenwick fen(n);
    for (int i = 1; i <= n; ++i)
        fen.upd(i, a[i]);
 
    while (q--) 
    {
        int opt, x, y;
        cin >> opt >> x >> y;
        if (opt == 1) 
        {
            fen.upd(x, y - a[x]);
            a[x] = y;
        }
        else 
        {
            cout << fen.qry(x, y) << "\n";
        }
    }
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}
