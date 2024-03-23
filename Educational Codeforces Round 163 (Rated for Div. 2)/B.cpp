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

int curNum = 0;

bool flag = true;

void check(int x)
{
    if (x / 10 >= curNum && x % 10 >= x / 10)
    {
        curNum = x % 10;
    }
    else
    {
        if (x < curNum) flag = false;
        else
        {
            curNum = x;
        }
    }
}

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
        int a[n];

        for (auto &it: a) cin >> it;

        for (int i = 0; i < n; i++) check(a[i]);

        cout << (flag == true ? "YES\n" : "NO\n");
        curNum = 0; flag = true;
    }
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}