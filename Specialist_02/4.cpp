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
   int n; cin>>n;
    int a[n],b[n];
  // check for already sorted.
    bool sorted = true;
    int ans1 = 0, ans2 =0;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        if(i>=2 && a[i] < a[i-1]){
            sorted = false;
        }
    }
   // Atleast one element of type 0 and one element of type 1.
   for(int i =1;i<=n;i++){
       cin>>b[i];
       if(b[i] == 1){
           ans1++;
       }
       else{
           ans2++;
       }
   }
   if(ans1 >= 1 && ans2>=1){
       cout<<"Yes"<<endl;
   }
   else if(sorted){
       cout<<"Yes"<<endl;
   }
   else{
       cout<<"No"<<endl;
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