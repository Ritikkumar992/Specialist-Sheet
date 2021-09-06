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
#include<bits/stdc++.h>
using namespace std;
#define int          long long int 
typedef              unsigned long long ull;
#define F            first
#define S            second
#define pb           push_back
#define pf           push_front
#define vec          vector<int>
#define pll          pair<int,int>
#define mll          map<int,int>
#define all(x)       (x).begin(),(x).end()
#define uniq(v)      (v).erase(unique(all(v)),(v).end())
#define sz(x)        (int)((x).size())
#define fw(i,a,b)    for(int i=a;i<b;i++)
#define lcm(a,b)     (a*b)/(__gcd(a,b))
#define check        cout<<checkedDude<<endl
#define mp           make_pair
const int mod   =    1000000007;
const int N     =    0;
#define mem(name, value) memset(name, value, sizeof(name))

void solve()
{
   string s;
		cin >> s;
 
		int n = s.length();
 
		int count_1 = 0;
		int count_0 = 0;
 
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				count_1++;
			} else {
				count_0++;
			}
		}
 
		int pref_0[n + 1] = {0};
		int pref_1[n + 1] = {0};
 
		if (s[0] == '0') {
			pref_0[0] = 1;
			pref_1[0] = 0;
		} else {
			pref_1[0] = 1;
			pref_0[0] = 0;
		}
 
		for (int i = 1; i < n; i++) {
			if (s[i] == '0') {
				pref_0[i] = pref_0[i - 1] + 1;
				pref_1[i] = pref_1[i - 1];
			} else {
				pref_1[i] = pref_1[i - 1] + 1;
				pref_0[i] = pref_0[i - 1];
			}
		}
 
		int ans = INT_MAX;
		for (int i = 0; i < n; i++) {
			ans = min(ans, pref_1[i] + (count_0 - pref_0[i]));
		}
 
		for (int i = 0; i < n; i++) {
			ans = min(ans, pref_0[i] + (count_1 - pref_1[i]));
		}
 
		cout << ans << "\n";
	}
int32_t  main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}