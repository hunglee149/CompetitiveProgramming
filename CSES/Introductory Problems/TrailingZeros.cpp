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
 
    int n; cin >> n;
    int cnt = 0;
 
    for (int i = 5; i <= n; i *= 5)
    {
        cnt += n/i;
    }
    cout << cnt;
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}
