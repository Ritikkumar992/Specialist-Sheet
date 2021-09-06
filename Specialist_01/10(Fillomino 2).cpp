//Codeforce handle : ritik151112
#include <bits/stdc++.h>
#define int long long int
typedef unsigned long long ull;
#define F first
#define S second
#define pb push_back
#define pf push_front
#define vec vector<int>
#define pll pair<int, int>
#define mll map<int, int>
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fw(i, a, b) for (int i = a; i < b; i++)
#define fw1(i, a, b) for (int i = a; i <= b; i++)
#define bw(i, a, b) for (i = a; i > b; i--)
#define bw1(i, a, b) for (i = a; i >= b; i--)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define prt(x) cout << x
#define prtl(x) cout << x << endl
#define check cout << checkedDude << endl
#define mp make_pair
const int mod = 1000000007;
#define mem(name, value) memset(name, value, sizeof(name))
using namespace std;
const int N = 500 + 10;

int n;
int a[N], b[N][N];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    // main logic.
    for (int i = 1; i <= n; i++){
        b[i][i] = a[i]; // putting the element of array 'A' at the diagonal of 2d array 'B'
        int x = i, y = i;
        for (int j = 1; j <= a[i] - 1; j++){
            if (b[x][y - 1] == 0 && y - 1 > 0){
                y--;
                b[x][y] = a[i];
            }
            else
                x++, b[x][y] = a[i];
        }
    }
    // output the 2d array.
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--)
    // {
    solve();
    // }2
    return 0;
}