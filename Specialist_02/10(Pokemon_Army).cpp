#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define bg begin()
#define rbg rbegin()
#define ed end()
#define sz size()
#define ff first
#define ss second
#define fon for(i=0;i<n;i++)
#define foj for(j=0;j<n;j++)
#define JSM ios_base::sync_with_stdio(false);
int main()
{
    JSM
    ll t,n,m,x,y,p,q,i,j,k,answer=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<ll> a(n); fon cin>>a[i];
        vector<ll> dp(n , 0) , Dp(n, 0);
        dp[0] = a[0] , Dp[0] = -a[0];
        ll pmx=a[0] , nmx=-a[0];
        for(i=1;i<n;i++)
        {
            dp[i] = max(a[i] , nmx + a[i]);
            Dp[i] = pmx - a[i] ;
            pmx = max(pmx , dp[i]);
            nmx = max(nmx , Dp[i]);
        }
        cout<<max(*max_element(dp.bg,dp.ed) , *max_element(Dp.bg,Dp.ed))<<endl;
    }
}