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

    int n; cin >> n;

    int start = 0, ans = 0;

    map<int, int> mp;

    int a[n];

    for (auto& x : a) cin >> x;

    for (int i = 0; i < n; i++) 
    {
        if (mp.find(a[i]) == mp.end()) mp[a[i]] = i;
        else 
        {
            if (mp[a[i]] >= start) start = mp[a[i]] + 1;
            mp[a[i]] = i;
        }
        ans = max(ans, i - start + 1);
    }

    cout << ans;
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}