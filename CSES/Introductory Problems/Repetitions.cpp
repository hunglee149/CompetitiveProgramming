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

    string s; cin >> s;
    int curFreq = 1, maxFreq = INT_MIN;
    char curChar = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (i == s.size() - 1)
        {
            if (s[i] == curChar)
            {
                curFreq++;
                maxFreq = max(maxFreq, curFreq);
            }
            else
            {
                maxFreq = max(maxFreq, curFreq);
            }
        }
        else
        {
            if (s[i] == curChar) curFreq++;
            else 
            {
                curChar = s[i];
                maxFreq = max(maxFreq, curFreq);
                curFreq = 1;
            }
        }  
    }
    
    if (maxFreq == INT_MIN) cout << curFreq;
    else cout << maxFreq;
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}