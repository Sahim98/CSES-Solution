/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
const int MOD = 1000000007;
using ld = long double;
using ll = long long;
 
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define br cout<<endl; 
#define inf 0x3f3f3f3f
#define op cout <<"[";
#define cl cout << "]\n";
#define infll 0x3f3f3f3f3f3f3f3fLL
#define print_vec(x) {op pri(x)cl}
#define lcm(a, b) a /__gcd(a, b)*b
#define digit(n) floor(log10(n))+1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define bug(a) cout<< #a " = "<<(a)<< ' ';
#define isrunning cout << "Execution Sucessfull...\n";
#define ver(expression) cout << (expression ? "YES\n" : "NO\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define print_mp(x) {for(auto i :x)cout<<'['<<i.F<<','<<i.S<<']'<<endl;}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl
#define pri(x) {op int j=x.size();for(auto i :x){j--;cout <<i;if(j)cout<<',';} cl}
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
 

template <class... Args>auto &see(const Args &... args)
{return ((cerr << " " << args),...) << '\n';}
#define bug(...) cerr << "[ " #__VA_ARGS__ " ] = "; see(__VA_ARGS__) << '\n';

 
int n ,x ;
 
int main()
{
    fast
 
	cin >> n >> x ; 
 
	vector<ll> v(n) ;
 
	for(ll &i : v) {
		cin >> i ;
	}
 
	sort(all(v)) ;
 
	int i(0) , j(n-1) ,gondola(0);
 
	while(i<=j){
		if(i == j){
			gondola++ ;
			break ;
		}
		else if(v[i]+v[j]>x){
			gondola++;
			j-- ;
		}
		else{
			i++ ;
			j--;
			gondola++;
		}
	}
	cout << gondola << endl ;
 
}