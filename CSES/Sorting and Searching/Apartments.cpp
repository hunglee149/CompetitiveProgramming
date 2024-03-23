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

    int n, m, k; cin >> n >> m >> k;

    int a[n], b[m];

    for (auto& x: a) cin >> x;
    for (auto& x: b) cin >> x;

    sort(a, a + n);
    sort(b, b + m);

   	int i = 0, j = 0, cnt = 0;
   	while (i < n && j < m)
   	{
   		if (a[i] >= b[j] - k && a[i] <= b[j] + k)
   		{
   			cnt++;
   			i++;
   			j++;
   		}
   		else
   		{
   			if (a[i] < b[j] - k)
   			{
   				i++;
   			}
   			else
   			{
   				j++;
   			}
   		}
   	}

   	cout << cnt;

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}