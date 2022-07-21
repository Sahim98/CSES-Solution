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
#define br cout<<'\n'; 
#define inf 0x3f3f3f3f
#define pb emplace_back
#define infll 0x3f3f3f3f3f3f3f3fLL
#define lcm(a, b) a /__gcd(a, b)*b
#define digit(n) floor(log10(n))+1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define sz(x) static_cast<int32_t>(x.size())
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
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
 
// a new data structure defined. Please refer below
// GNU link : https://goo.gl/WVDL6g
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
			tree_order_statistics_node_update>
	ordered_multiset;
 
 
void solve()
{
    int n ,x ,avg;
    cin >> n >> x ;
    vi a(n)  ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
 
    ordered_multiset mid;
    mii mp ;
 
    for(int i = 0 ; i < x ; i++)
    {
        mp[a[i]]++ ;
        mid.insert(a[i]) ;
    }
 
 
    for (int i = x; i < n; i++)
    {
        int x1 = x/2 - 1 ;
 
        if(x&1){
            avg = *mid.find_by_order(x/2)  ;
        }
        else{
            avg = *mid.find_by_order(x1) ;
        }
 
        cout << avg << " " ;
 
        mid.erase(mid.find_by_order(mid.order_of_key(a[i-x])));
        
        mid.insert(a[i]) ;
    }
 
    if(x&1)avg = *mid.find_by_order(x/2)  ;
 
    else avg = *mid.find_by_order(x/2-1) ; 
 
    cout << avg << endl ;
}
 
int main()
{
    fast
    int test = 1 ;// cin >> test ; 
    for(int i = 1;  i <= test ; i++)solve() ;  
}
