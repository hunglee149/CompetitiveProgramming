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
 
    int n; cin >> n;
    
    multiset<array<int, 2>> se;
 
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        se.insert({a, 1});
        se.insert({b + 1, - 1});
    }
 
    int maxRes = 0, sum = 0;
    
    for (auto it: se)
    {
        sum += it[1];
        maxRes = max(maxRes, sum);
    }
 
    cout << maxRes;
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}