// to find anything using keyword , use control+f
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; // change value oF MOD here if u want something raise to power modulo k
#define F first
#define S second
const long long INF = 1e14;
 
// Types
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
 
// Shortcuts
#define pb      push_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
#define endl '
' 
 
// Common containers
using vi  = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vpi = vector<pii>;
 
// ------------------------- Utility Functions ------------------------- //
 
 
 
// ✅ GCD (Greatest Common Divisor)
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
 
// ✅ HCF (Same as GCD, for readability)
ll hcf(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}
 
// ✅ LCM (Least Common Multiple)
ll lcm(ll a, ll b) {
    ll g = gcd(a, b);
    ll ans = (a / g) * b;
    return ans;
}
 
// ✅ Fast Power (modular exponentiation)
ll power(ll a, ll b, ll mod = MOD) {      // we can change value up there MOD 
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b / 2;
    }
    return res;
}
 
ll power_ll(ll a, ll b) {          // if we dont want to take the mod of result 
    ll res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
ll isqrt(ll n) { // to get square root precisely
    ll x = sqrtl((long double)n);
    while ((x + 1) * (x + 1) <= n) x++;
    while (x * x > n) x--;
    return x;
}
 
// ✅ Check if a number is prime
bool isPrime(ll n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
 
// ✅ nCr (Combination n choose r) using Fermat’s Little Theorem (for large n under mod)
ll nCr_mod(ll n, ll r, ll mod = MOD) {
    if (r > n)
        return 0;
 
    vector<ll> fact(n + 1, 1);
    for (ll i = 2; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % mod;
 
    ll numerator = fact[n];
    ll denominator = (fact[r] * fact[n - r]) % mod;
 
    ll result = (numerator * power(denominator, mod - 2, mod)) % mod;
    return result;
}
 
// ✅ Simple nCr (without mod, for small numbers)
ll nCr_simple(ll n, ll r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
 
    r = min(r, n - r);
    ll res = 1;
    for (ll i = 1; i <= r; i++) {
        res = res * (n - r + i);
        res = res / i;
    }
    return res;
}
 
 
// ---------------------------------------------------------
// Check if string 's' is a substring of string 'x'
bool isSub(const string &x, const string &s) {
    return x.find(s) != string::npos;  
    
}
 
bool compare(int a1, int a2) {
    if (a1 > a2)                   // for descending ; 
        return true; // return true means a1 should appear before a2
 
    else
        return false;
}
bool Compare(pair<ll,ll>p1 , pair<ll,ll>p2 ){
    return p1.first>p2.first;
}
bool CompAre (pair<ll,ll>p1 , pair<ll,ll>p2 ){
    return p1.second<p2.second;
}
vector<vector<pair<ll,ll>>>adj;
vector<vector<ll>>parent;
vector<ll>depth;
vector<ll>val;
vector<ll>prefix;
vector<ll>road;
vector<ll>edgeroad;
// now so i assume rooted at 1
// and basically do partial sum
// if go from x and y , then both +1
 
// so to convert i assign rod ith to the root of parent
// 
 
void dfs(ll node , ll par,ll dis, ll edgenumber, ll edgeweight){
 depth[node]=dis;
 val[node]=edgeweight;
 edgeroad[node]=edgenumber;
 parent[node][0]=par;
 for(ll i=1 ; i<20 ; i++){
    parent[node][i]=parent[parent[node][i-1]][i-1];
 }
 for(auto &i : adj[node]){
    ll f=i.F;
    ll s=i.S;
    if(s!=par){
        dfs(s,node,dis+1,f,0);
    }
 }
 
}
ll GetAncestor(ll x, ll y){
    if(depth[x]>depth[y]){
        swap(x,y);
    }
    ll k=depth[y]-depth[x];
    for(ll i=19 ; i>=0 ; i--){
        if(k>=power_ll(2,i)){
            y=parent[y][i];
            k-=power_ll(2,i);
        }
    }
    if(x==y){
        return x;
    }
    for(ll i=19 ; i>=0 ; i--){
        if(parent[x][i]!=parent[y][i]){
            x=parent[x][i];
            y=parent[y][i];
        }
    }
    return parent[x][0];
}
void dfs2(ll node ,ll par){
    prefix[node]=val[node];
    for(auto &i : adj[node]){
        if(i.S!=par){
            dfs2(i.S,node);
            prefix[node]+=prefix[i.S];
        }
    }
}
 
 
 
void Solve(){
ll n; cin>>n;
adj.resize(n+1);
parent.assign(n+1,vector<ll>(20));
depth.resize(n+1);
edgeroad.resize(n+1);
val.resize(n+1);
prefix.resize(n+1);
for(ll i=0 ; i<n-1 ; i++){
    ll x,y; cin>>x>>y;
    adj[x].push_back({i+1,y});
    adj[y].push_back({i+1,x});
}
dfs(1,1,0,-1,0);
ll k; cin>>k;
while(k--){
    ll x,y; cin>>x>>y;
    ll b=GetAncestor(x,y);
    val[x]+=1;
    val[y]+=1;
    val[b]-=2; // 2 becoz we coming from x and y
    // but b should not get any value as its parent is above so no contribution
 
}
dfs2(1,1);
vector<ll>ans(n+1);
for(ll i=2 ; i<=n ;i++){
    ans[edgeroad[i]]=prefix[i];
}
for(ll i=1 ; i<=n-1 ;i++){
    cout<<ans[i]<<" ";
}
cout<<"
";
 
 
 
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll t=1; //cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}
 
 
 
 
 
 
 