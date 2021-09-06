#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define pii pair<ll, ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n + 1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

vi adj[26];
string ans = "";
vector<bool> vis(26, false);

void dfs(ll x, ll &n)
{
    if (n == 0)
        return;

    vis[x] = true;

    for (ll u : adj[x])
    {
        if (n == 0)
            return;

        char ch = 'a' + u;

        ans += ch;

        n--;

        if (n == 0)
            return;

        if (!vis[u])
            dfs(u, n);

        if (x == u)
            continue;

        if (n == 0)
            return;

        ch = 'a' + x;

        ans += ch;

        n--;

        if (n == 0)
            return;
    }
}

signed main()
{
    FIO;

    ll n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << "a";
        exit(0);
    }

    ll len = n;

    for (ll i = 0; i < k; i++)
    {
        for (ll j = i; j < k; j++)
        {
            adj[i].pb(j);
        }
    }

    ans += "a";
    n--;

    dfs(0, n);

    string res = "";

    while ((ll)res.length() < len)
        res += ans.substr(1);

    cout << res.substr(0, len);
}