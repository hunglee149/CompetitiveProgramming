#include <bits/stdc++.h>
 
using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;
 
#define faster ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define fi first
#define se second
#define pb push_back
#define vii vector<int>::iterator
#define mkp(x, y) make_pair(x, y)
#define task "hli"
#define endl '\n'
 
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
 
    int n, k; cin >> n >> k;
 
    map<int, int> mp;
 
    for (int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        mp[x]++;
    }
 
    for (int i = 0; i < k; i++)
    {
        int x; cin >> x;
        auto it = mp.upper_bound(x);
 
        if(it != mp.begin())
        {
            --it;
            if ((*it).se > 0)
            {
                cout << (*it).fi << endl;
                (*it).se--;
                if ((*it).se == 0) mp.erase(it);
            }
        }
        else
        {
            cout << "-1\n";
        }
    }
}