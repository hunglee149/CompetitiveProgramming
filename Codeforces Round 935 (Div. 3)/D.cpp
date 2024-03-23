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

int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

    int t; cin >> t;
    while(t--)
    {
    	ll n, m; cin >> n >> m;
    	ll a[n], b[n];

    	for (ll i = 0; i < n; i++) cin >> a[i];
    	for (ll i = 0; i < n; i++) cin >> b[i];

    	ll cur = 0, res = LLONG_MAX;

    	for (ll i = n - 1; i >= 0; i--)
    	{
    		if (i + 1 <= m)
    		{
    			res = min(res, cur + a[i]);
    		}
    		cur += min(a[i], b[i]);
    	}
    	cout << res << endl;
    }

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}