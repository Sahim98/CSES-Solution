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

 
bool comp(pair<int,int> a,pair<int,int> b)
{
	return a.S < b.S ;
}
 
int n, k , m ; 
 
int main()
{
    cin >> n >> m >> k;
	vector<int> a(n),b(m) ;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < m; ++i) cin >> b[i];
 
	sort(all(a));
 
	sort(all(b));
 
	int i(0) , j(0) , res(0);
 
	while(i < n && j < m)
	{
		if(a[i] >= b[j]-k && a[i] <= b[j]+k)
		{
			res++;
			i++;
			j++;
		}
 
		else if(a[i] < b[j]-k)
		{
			i++;
		}
 
		else
		{
			j++;
		}
 
	}
 
	cout << res << endl;
 
}
