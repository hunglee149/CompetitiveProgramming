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

int F[102][102];
 
int C(int n, int k)
{
    if (k == 0 || k == n) return 1;
    if (F[n][k]) return F[n][k];
    F[n][k] = (C(n - 1, k - 1) + C(n - 1, k))%MOD;
    return F[n][k];
}
 
int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
 
int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }
 
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll sum = 1ll*(i*i)*(i*i - 1)/2;
        if (i == 1 || i == 2)
        {
            cout << sum << endl;
            continue;
        } 
        else 
        {
            cout << sum - 4ll*(i - 2)*(i - 1) << endl;        
        }
    }       

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}