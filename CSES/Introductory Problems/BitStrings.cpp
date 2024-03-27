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
 
ll binpow(ll a, ll n, ll c)
{
    ll res = 1;
    while(n)
    {
        if(n&1)
        {
            res = res * a % c;
        }
        n /= 2;
        a = a * a % c;
    }
    return res;
}
 
int main()
{
    io
 
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    ll n; cin >> n;
 
    cout << binpow(2, n, int(1e9 + 7));
 
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}