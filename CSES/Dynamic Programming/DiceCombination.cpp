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
      
const int maxn = 1e6;
const int MOD = 1e9 + 7;
 
int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    int n;
    cin >> n;
    
    vector<int> dp(maxn + 1, 0);
    dp[0] = 1;
    
    for (int i = 1; i <= maxn; i++) 
    {
        for (int j = 1; j <= 6 && i - j >= 0; j++) 
        {
            (dp[i] += dp[i - j]) %= MOD;
        }
    }
    
    cout << dp[n] << endl;
 
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}