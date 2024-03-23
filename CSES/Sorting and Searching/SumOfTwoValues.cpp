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

    int n, x; cin >> n >> x;
    int a[n + 1];

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
    	cin >> a[i];
    	if (mp.count(x - a[i]))
    	{
    		if (i != mp[x - a[i]])
    		{
    			cout << i << " " << mp[x - a[i]];
    			return 0;
    		}
    	}
    	mp[a[i]] = i;
    }

    cout << "IMPOSSIBLE";
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}