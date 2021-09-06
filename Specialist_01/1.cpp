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
    fw(i,0,n) cin>>v[i];

    sort(all(v));

    // method to find minimum difference.
    int min_diff = INT_MAX;
    for(int i = 0;i<n-1;i++){
        min_diff = min(min_diff, v[i+1]-v[i]);
    }
    //main logic.
    for(int i = 0;i<n-1;i++)
    {
        if(v[i+1]-v[i] == min_diff)
        {
            cout<<v[i]<<" ";

            //bigger
            for(int j = i+2;j<n;j++){
                cout<<v[j]<<" ";
            }

            //smaller 
            for(int j = 0;j<i;j++){
                cout<<v[j]<<" ";
            }
            cout<<v[i+1];
            break;
        }
    }
    cout<<endl;

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