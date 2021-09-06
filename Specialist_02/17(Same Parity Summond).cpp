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
#define fw1(i,a,b)   for(int i=a;i<=b;i++)
#define bw(i,a,b)    for(i=a;i>b;i--)
#define bw1(i,a,b)   for(i=a;i>=b;i--)
#define lcm(a,b)     (a*b)/(__gcd(a,b))
#define prt(x)       cout<<x
#define prtl(x)      cout<<x<<endl
#define check        cout<<checkedDude<<endl
#define mp           make_pair
const int mod   =    1000000007;
const int N     =    0;
#define mem(name, value) memset(name, value, sizeof(name))
using namespace std;
bool check_even(int n, int k)
{
	int rem = n - 2 * k;
 
	if (rem < 0)
		return 0;
 
	if (rem & 1)
		return 0;
 
	cout << "YES\n";
 
	for (int i = 0; i < k - 1; ++i)
		cout << 2 << ' ';
 
	cout << 2 + rem << '\n';
 
	return 1;
}
bool check_odd(int n, int k)
{
	int rem = n - k;
 
	if (rem < 0)
		return 0;
 
	if (rem & 1)
		return 0;
 
	cout << "YES\n";
 
	for (int i = 0; i < k - 1; ++i)
		cout << 1 << ' ';
 
	cout << 1 + rem << '\n';
 
	return 1;
}
int32_t  main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
         int n, k; cin >> n >> k;
 
		if (check_even(n, k) || check_odd(n, k))
			continue;
 
		else
			cout << "NO\n";
    }
    return 0;
}