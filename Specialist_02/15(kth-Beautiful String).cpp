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

void solve()
{
     int n, k;
        cin >> n >> k;
        string s(n, 'a');
        for (int i = n - 2; i >= 0; i--) {
            if (k <= (n - i - 1)) {
                s[i] = 'b';
                s[n - k] = 'b';
                cout << s << endl;
                break;
            }
            k -= (n - i - 1);
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