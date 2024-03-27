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
 
    ll sum = 1ll*n*(n + 1)/2;
 
    if (sum % 2) cout << "NO";
    else
    {
        cout << "YES\n";
 
        vector<int> v1, v2, visited(n + 1, 0);
 
        ll toReach = sum/2, sum1 = 0;
 
        while(sum1 < sum/2)
        {
            if (n < toReach)
            {
                toReach -= n;
                visited[n] = 1;
                v1.pb(n);
                --n;
            }
            else
            {
                visited[toReach] = 1;
                v1.pb(toReach);
                break;
            }
        }
 
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i]) v2.pb(i);
        }
 
        cout << v1.size() << endl;
        for (auto it: v1) cout << it << " ";
        cout << endl << v2.size() << endl;
        for (auto it: v2) cout << it << " ";
    }
 
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}