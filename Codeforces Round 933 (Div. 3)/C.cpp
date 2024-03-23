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
    	string s; cin >> s;

    	int ans = 0, pos = 0;
    	while ((int)s.find("map", pos) != -1)
		{
			pos = s.find("map", pos) + 1;
			ans++;
		}
		
		pos = 0;

		while ((int)s.find("pie", pos) != -1)
		{
			pos = s.find("pie", pos) + 1;
			ans++;
		}

		int ansSpecial = 0;

		pos = 0;

		while ((int)s.find("mapie", pos) != -1)
		{
			pos = s.find("mapie", pos) + 1;
			ansSpecial++;
		}
		cout << ans - ansSpecial << endl;
    }

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}