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
 
int main()
{
    faster
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    int n, x; cin >> n >> x;
    int a[n];
 
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a, a + n);
 
    int i = 0, j = n - 1;
 
    int ans = 0;
 
    while (i < j)
    {
        while (i < j && a[i] + a[j] > x)
        {
            --j;
        }
 
        if (i >= j) break;
        ++ans;
        ++i; --j;
    }
 
    cout << n-ans;
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}