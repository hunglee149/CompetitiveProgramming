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
        int n; cin >> n;

        vector<int> v(n);

        for (int &x: v) cin >> x;

        for (int i = 1; i < n - 1; i++)
        {
        	int soLan = min({v[i] / 2, v[i - 1], v[i + 1]});
            v[i] -= 2*soLan;
            v[i - 1] -= soLan;
            v[i + 1] -= soLan;
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0) flag = false;
        }

        if (flag == true) cout << "YES\n";
        else cout << "NO\n";
    }
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}