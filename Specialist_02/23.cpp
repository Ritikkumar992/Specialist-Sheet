/*
        .__   __   .__  __     ____  .________ ____  ____  ____ ________  
_______ |__|_/  |_ |__||  | __/_   | |   ____//_   |/_   |/_   |\_____  \ 
\_  __ \|  |\   __\|  ||  |/ / |   | |____  \  |   | |   | |   | /  ____/ 
 |  | \/|  | |  |  |  ||    <  |   | /       \ |   | |   | |   |/       \ 
 |__|   |__| |__|  |__||__|_ \ |___|/______  / |___| |___| |___|\_______ \
                            \/             \/                           \/
One day I will be Candidate Master on Codeforces
I didn't come this far to only come this far 
*/
#include <bits/stdc++.h>
using namespace std;
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
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define check cout << checkedDude << endl
#define mp make_pair
const int mod = 1000000007;
const int N = 0;
#define mem(name, value) memset(name, value, sizeof(name))

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt1 = -1, cnt2 = -1, cnt3 = -1;
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt1 = i;
        if (s[i] == '2')
            cnt2 = i;
        if (s[i] == '3')
            cnt3 = i;

        if (cnt1 != -1 && cnt2 != -1 && cnt3 != -1)
        {
            int x = min(cnt1, min(cnt2, cnt3));
            int y = max(cnt1, max(cnt2, cnt3));
            int res = y - x + 1;

            ans = min(res, ans);
        }
    }
    if (ans == INT_MAX)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}