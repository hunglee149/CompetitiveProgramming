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

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> players(n, 0);
    vector<int> newPlayers;
    int cnt = 0;
    newPlayers.pb(x);
    for(int i = 0; i < m; i++)
    {
        cnt=0;
        vector<int> temp;
        int r;
        char c;
        cin >> r >> c;
        for(auto element: newPlayers)
        {
            if((c == '0' || c == '?') && players[((element + r) % n + n) % n] == 0)
            {
                cnt++;
                int number = ((element + r) % n + n) % n;
                players[number] = 1;
                if(number == 0)
                {
                    temp.pb(n);
                }
                else
                {
                    temp.pb(number);
                }
            }
            if((c == '1' || c == '?') && players[((element - r) % n + n) % n] == 0)
            {
                cnt++;
                int number = ((element - r) % n + n) %n;
                players[number] = 1;
                if(number == 0)
                {
                    temp.pb(n);
                }
                else
                {
                    temp.pb(number);
                }
            }
        }
        fill(all(players), 0);
        newPlayers = temp;
    }
    cout << cnt << endl;
    sort(all(newPlayers));
    for (auto it: newPlayers)
    {
        cout << it << " ";
    }
    cout << endl;
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
    	solve();
    }

    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}
