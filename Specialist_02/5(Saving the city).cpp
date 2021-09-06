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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int first = -1;
        int last = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                first = i;
            break;
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                last = i;
            break;
        }

        if (first == last && first == -1)
        {
            cout << "0" << endl;
            continue;
        }
        int ans = 0;
        int ch = INT_MAX;
        for(int i = first ;i<=last;i++)
        {
            int c = 0;
            while(s[i] == '0'){
                c++;
                i++;
            }
            ans += min(a,b*c);
        }
         cout<<ans<<endl;
    }
   
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin>>t;

    solve();
    // }
    return 0;
}