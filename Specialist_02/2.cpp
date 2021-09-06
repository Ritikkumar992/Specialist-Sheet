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
const int N     =    2e5;
#define mem(name, value) memset(name, value, sizeof(name))

int a[N],b[N];
map<int,int> mpp;
void solve()
{
   int n; cin>>n;

   for(int i = 1;i<=n;i++){
       int x; cin>>x;
       a[x] = i;// position of element of array a.
   }
   for(int i = 1;i<=n;i++){
       int x; cin>>x;
       b[x] = i;// position of element of array b.
   }
   for(int i = 1;i<=n;i++){
       mpp[(n+a[i]-b[i])%n]++;
   }
   int ans = 0;
   for(auto it: mpp){
       ans = max(ans, it.S);
   }
   cout<<ans<<endl;
}
int32_t  main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}