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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a, b;
    //Any balanced bracket sequence must begin with '(' and end with ')'.
    // Therefore, a and b must agree in the first and last positions,
    // so we require s1=sn=1 or a solution doesn't exist.
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    if (cnt % 2 == 1 || s[0] == '0' || s[n - 1] == '0')
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        int k = 0;
        bool flip = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                //We will make the first k2 positions open in both a and b,
                if (cnt > k * 2)
                {
                    a.push_back('(');
                    b.push_back('(');
                }
                //nd we will make the last k2 positions closed in both a and b
                else
                {
                    a.push_back(')');
                    b.push_back(')');
                }
                k++;
            }
            else
            {
                //the 0 bits in s will alternate between which string gets the open bracket.
                if (flip == false)
                {
                    a.push_back(')');
                    b.push_back('(');
                }
                else
                {
                    a.push_back('(');
                    b.push_back(')');
                }
                flip = !flip; //if we decare flip = true it makes our string unbalanced.
            }
        }
    }
    cout << "Yes"<< "\n"<< a << "\n"<< b << endl;
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