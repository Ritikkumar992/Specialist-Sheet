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
#define lcm(a,b)     (a*b)/(__gcd(a,b))
#define check        cout<<checkedDude<<endl
#define mp           make_pair
#define mem(name, value) memset(name, value, sizeof(name))
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=2e5+5;
 
int dp[N][2];
 
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	fw(i,0,n){
		cin >> a[i];
	}
	if(n == 1){
		cout << a[0] << "\n";
		return;
	}
	// dp[i][t] = answer till index i, t player turn, t = 0 first, t = 1 second
	dp[0][0] = a[0];
	dp[0][1] = INF;
	dp[1][0] = a[0] + a[1];
	dp[1][1] = a[0];
	fw(i,2,n){
		dp[i][0] = min(dp[i-1][1] + a[i], dp[i-2][1] + a[i] + a[i-1]);
		dp[i][1] = min(dp[i-1][0], dp[i-2][0]);
	}
	
	cout << min(dp[n-1][0],dp[n-1][1]) << "\n";
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