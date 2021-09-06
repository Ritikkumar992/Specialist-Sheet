//Codeforce handle : ritik151112
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

void solve()
{
    int n; cin>>n;
    vec v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    int cnt = 0;

    //main logic
    map<int,int> ans;
    for(int i = 0;i<n;i++)
    {
        v[i] = v[i]-i;
        ans[v[i]] = ans[v[i]]+1;
    }
    for(auto it: ans){
        cnt += (it.S*(it.S-1))/2;
    }
    cout<<cnt<<endl;

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