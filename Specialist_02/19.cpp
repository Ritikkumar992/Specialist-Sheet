#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
#define concat(a, b) a##b

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        ll n;
        cin>>n;
        ll x=1;
        ll ans=0;
        ll stair=1;

        while(n-x>=0)
        {
            n = n - x;
            ans++;
            stair=stair*2+1;
            x= stair*(stair+1)/2;
            
            
        }

        cout<<ans<<"\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}