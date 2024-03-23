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

//Kadane's Algorithm

ll maxSubArrSum(int a[], int n)
{
	ll curSum = 0, maxSum = 0;

	for (int i = 0; i < n; i++)
	{
		curSum += 1ll*a[i];
		if (curSum < 0) curSum = 0;
		else maxSum = max(maxSum, curSum);
	}

	return maxSum;
}

int main()
{
    io
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

    int n; cin >> n;
    int a[n];

    bool checkDuong = false;
    for (auto& x: a)
    {
    	cin >> x;
    	if (x > 0) checkDuong = true;
    }

    if (checkDuong == false) cout << *max_element(a, a + n);
    else cout << maxSubArrSum(a, n);

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}