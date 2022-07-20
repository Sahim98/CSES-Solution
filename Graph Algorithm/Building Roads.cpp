// In the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define el  '\n'
#define lcm(a, b) a/__gcd(a, b) * b
#define all(x) x.begin(), x.end()
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
ll MOD = 1e9;
ll Mul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
ll Add(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }//a^x
ll Pow(ll a, ll x){ll res = 1;while (x > 0){if (x % 2 != 0)res = (res * a) ;a = (a * a) ;x >>= 1;}return res;}
template <class... Args>auto &see(const Args &... args) { return ((cerr << " " << args), ...) << '\n'; }
#define bug(...) cerr << "[ " #__VA_ARGS__ " ]=";see(__VA_ARGS__) << '\n';
 
const int N = 1e5+3;
 
vector<int> adj[N] ;
 
vector<int> vis(N,0) ;
 
void dfs(int source)
{
    if(vis[source])return;
 
    vis[source] = 1 ;
 
    for(int x : adj[source])
    {
        if(!vis[x])dfs(x);
    }
}
 
 
 
 
 
 int n , m , a, b ;
int main()
{
 // IOS
 cin >> n >> m ;
 
 for(int i = 0 ; i < m ; i++)
 {
     cin >> a >> b ;
 
     adj[a].push_back(b) ;
 
     adj[b].push_back(a) ;
 
 }
 
 dfs(1) ;
 
 vector<pair<int,int>> v ;
 
 for(int i = 1 ; i <= n ; i++)
 {
     if(!vis[i])
     {
         dfs(i) ;
         v.push_back({1,i});
     }
 }
 
 cout << v.size() << el;
 
 for(auto x : v)
 {
     cout << x.first << ' ' << x.second << el ;
 }
}
