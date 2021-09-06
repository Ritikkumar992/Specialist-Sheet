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
   int n,x; cin>>n>>x;
   vec v(n);
   fw(i,0,n) cin>>v[i];

   int l_val = 0, r_val = 0, already = 0;
   for(int i =0;i<n;i++)
   {
       if(v[i]>x) r_val += v[i]-x; 
       else if(v[i]<x) l_val += x-v[i];
       else already++; 
   }
   if(l_val == 0 && r_val == 0){
       cout<<0<<endl;
   }
   else if(already>0 || l_val == r_val){
       cout<<1<<endl;
   }
   else{
       cout<<2<<endl;
   }
   
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