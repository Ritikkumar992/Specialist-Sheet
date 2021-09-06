//Ritik Kumar CSE 'A' BBIT.
#include<bits/stdc++.h>
#define int long long int 
typedef unsigned long long ull;
#define fw(i,a,b)   for(int i=a;i<b;i++)
#define fw1(i,a,b)  for(int i=a;i<=b;i++)
#define bw(i,a,b)   for(i=a;i>b;i--)
#define bw1(i,a,b)  for(i=a;i>=b;i--)
#define pb          push_back
#define vec         vector<int>
#define pll       pair<int,int>
#define mll         map<int,int>
#define F           first
#define S           second
#define lcm(a,b)    (a*b)/(__gcd(a,b))
#define prt(x)      cout<<x
#define prtl(x)     cout<<x<<endl
#define int long long int 
#define check       cout<<checkedDude<<endl
const int mod = 1000000007;
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))
const int N = 1000000007;
using namespace std;

void solve()
{
    int n;cin>>n;
    int arr[n];
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 1;i<=n;i++)
    {
        for(int j = arr[i] - i; j<=n; j+=arr[i])
        {
            if(j>0)
               if(arr[i]*arr[j] == i+j && i<j)
                  count++;
        }
    }
    cout<<count<<endl;
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