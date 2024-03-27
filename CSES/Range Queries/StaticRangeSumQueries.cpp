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

int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

    int n, t; cin >> n >> t;
    int a[n + 1];

    ll pre[n + 1];

    fill(pre, pre + n + 1, 0ll);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i == 1) pre[i] = 1ll*a[i];
        else pre[i] = pre[i - 1] + 1ll*a[i];
    }

    while (t--)
    {
        int a, b; cin >> a >> b;
        cout << pre[b] - pre[a - 1] << endl;
    }

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}