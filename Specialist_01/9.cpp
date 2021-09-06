//Codeforce handle : ritik151112
#include <bits/stdc++.h>
#define int long long int
typedef unsigned long long ull;
#define F first
#define S second
#define pb push_back
#define pf push_front
#define vec vector<int>
#define pll pair<int, int>
#define mll map<int, int>
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fw(i, a, b) for (int i = a; i < b; i++)
#define fw1(i, a, b) for (int i = a; i <= b; i++)
#define bw(i, a, b) for (i = a; i > b; i--)
#define bw1(i, a, b) for (i = a; i >= b; i--)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define prt(x) cout << x
#define prtl(x) cout << x << endl
#define check cout << checkedDude << endl
#define mp make_pair
const int mod = 1000000007;
const int N = 0;
#define mem(name, value) memset(name, value, sizeof(name))

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vec v(n);
        fw(i, 0, n) cin >> v[i];

        vector<pair<int, int>> ans;
        int idx = -1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[0])
            {
                idx = i;
                ans.pb({1, i + 1});
            }
        }
        if (idx == -1)
        {
            cout << "No" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[0])
            {
                ans.pb({idx + 1, i + 1});
            }
        }
        cout << "Yes" << endl;
        for (auto it : ans)
        {
            cout << it.F << " " << it.S << endl;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}