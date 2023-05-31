#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a,a+n)
#define rev(a) reverse(a,a+n)
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

void solve(ll x,ll n)
{
    ll ans =1;
    for (int i = 2; i <= n; i+=2)
    {
       // ans += pow(x,i);
       for(int j=1;j<=i;j+=2)
       {
           ans = ans*x;
       }
    }

    cout << ans << endl;
    
}

int main()
{
    FIO;
    ll x,n;
    cin >>x>> n;

    solve(x,n); 
    return 0;
}
