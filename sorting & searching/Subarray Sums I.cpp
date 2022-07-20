#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1000000007;
using ld = long double;
using ll = long long;
using vi = vector<int> ;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using si = set<int> ;
using sll = set<ll> ;
using vll = vector<ll> ;
using mii = map<int,int> ;
using mll = map<ll,ll> ;
using vpii = vector<pair<int,int>> ;
using vvi = vector<vector<int>> ;
 
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define br cout<<'\n'; 
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3fLL
#define lcm(a, b) a /__gcd(a, b)*b
#define digit(n) floor(log10(n))+1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define ver(expression) cout << (expression ? "YES\n" : "NO\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl
 
 
#define bug(args...) do {cerr << #args << " : "; dbg(args); } while(0)
void dbg () {cerr << endl;}
template <typename T>
void dbg( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}
template <typename T, typename ... hello>
void dbg( T arg, const hello &... rest) {cerr << arg << ' '; dbg(rest...);}
 
 
 
template <typename T>ostream& operator<<(ostream& os, const vector<T>& v){
os << "[";for (int i = 0; i < v.size(); ++i) {os << v[i];
if (i != v.size() - 1)os << ", ";}os << "]\n";return os;}
 
template <typename T>ostream& operator<<(ostream& os, const set<T>& v){
os << "[";for (auto it : v) {os << it;if (it != *v.rbegin())os << ", ";}
os << "]\n";return os;}
 
 
 
void solve()
{
    int n ,x ;
    cin >> n >> x ;
    vi a(n) ,pre(n+1); mii mp ;
    for(int i = 0; i < n; ++i) cin >> a[i] ,pre[i+1] = a[i];
 
    for(int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i-1] +  a[i-1] ;
    }
 
    int ans = 0 ,j = 0;
    for(int i = 1; i <= n; ++i)
    {
        while(pre[i]-pre[j] > x)j++;
 
        if(pre[i]-pre[j] == x)
        {
            ans++;
        }
    }
    cout << ans << endl ;
}
 
int main()
{
    fast
    int test = 1 ;// cin >> test ; 
    for(int i = 1;  i <= test ; i++)solve() ;  
}
