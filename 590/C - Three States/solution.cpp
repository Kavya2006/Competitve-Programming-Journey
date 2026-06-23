// to find anything using keyword , use control+f
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; // change value oF MOD here if u want something raise to power modulo k
 
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
vector<ll>d1;
vector<ll>d2;
vector<ll>d3;
 
void bfs1(ll n, ll start, vector<vector<pair<ll,ll>>>&adj){
 vector<ll>vis(n+1,0);
 d1[start]=0;
 deque<ll>dq;
 dq.push_front(start);
 while(!dq.empty()){
    ll curr=dq.front();
    dq.pop_front();
    for(auto &neighbour : adj[curr]){
        ll w=neighbour.first;
        ll node=neighbour.second;
        if(d1[node]>d1[curr]+w){
            d1[node]=d1[curr]+w;
            if(w==1){
                dq.push_back(node);
            }
            else{
                dq.push_front(node);
            }
        }
    }
 }
}
void bfs2(ll n, ll start, vector<vector<pair<ll,ll>>>&adj){
 vector<ll>vis(n+1,0);
 d2[start]=0;
 deque<ll>dq;
 dq.push_front(start);
 while(!dq.empty()){
    ll curr=dq.front();
    dq.pop_front();
    for(auto &neighbour : adj[curr]){
        ll w=neighbour.first;
        ll node=neighbour.second;
        if(d2[node]>d2[curr]+w){
            d2[node]=d2[curr]+w;
            if(w==1){
                dq.push_back(node);
            }
            else{
                dq.push_front(node);
            }
        }
    }
 }
}
void bfs3(ll n, ll start, vector<vector<pair<ll,ll>>>&adj){
 vector<ll>vis(n+1,0);
 d3[start]=0;
 deque<ll>dq;
 dq.push_front(start);
 while(!dq.empty()){
    ll curr=dq.front();
    dq.pop_front();
    for(auto &neighbour : adj[curr]){
        ll w=neighbour.first;
        ll node=neighbour.second;
        if(d3[node]>d3[curr]+w){
            d3[node]=d3[curr]+w;
            if(w==1){
                dq.push_back(node);
            }
            else{
                dq.push_front(node);
            }
        }
    }
 }
}
 
 
void Solve(){
ll n,m; cin>>n>>m;
d1.assign(n*m,1e18);
d2.assign(n*m,1e18);
d3.assign(n*m,1e18);
vector<vector<pair<ll,ll>>>adj(n*m);
ll one,two,three;
vector<vector<char>>matrix(n, vector<char>(m));
for(ll i=0 ; i<n ; i++){
    for(ll j=0 ; j<m ; j++){
        cin>>matrix[i][j];
        if(matrix[i][j]=='1'){
            one=i*m+j;
        }
        if(matrix[i][j]=='2'){
            two=i*m+j;
        }
        if(matrix[i][j]=='3'){
            three=i*m+j;
        }
 
    }
}
ll dx[]={1,0,-1,0};
ll dy[]={0,-1,0,1};
for(ll i=0 ; i<n ; i++){
    for(ll j=0 ; j<m ; j++){
        if(matrix[i][j]!='#'){
            for(ll d=0 ; d<4 ; d++){
               ll nx=i+dx[d];
               ll ny=j+dy[d];
               if(nx>=0 && ny>=0 && nx<n && ny<m){
                if(matrix[i][j]=='.'){
                    if(matrix[nx][ny]!='.'){
                    adj[i*m+j].push_back({0,nx*m+ny});
                    }
                    else{
                         adj[i*m+j].push_back({1,nx*m+ny});
                    }
                }
                else{
                    if(matrix[nx][ny]=='.'){
                        adj[i*m+j].push_back({1,nx*m+ny});
                    }
                    else{
                        adj[i*m+j].push_back({0,nx*m+ny});
                    }
                }
               }
            }
        }
    }
}
 
bfs1(n*m,one,adj);
bfs2(n*m,two,adj);
bfs3(n*m,three,adj);
if(d1[two]==1e18 || d1[three]==1e18){
    cout<<-1<<endl;
    return;
}
ll dis=1e18;
for(ll i=0; i<n*m ; i++){
 if(matrix[i/m][i%m]!='#'){
    if(matrix[i/m][i%m]=='.'){
   dis=(min(dis,max(d1[i]+d2[i]+d3[i]-2,0LL)));
    }
    else{
        dis=min(dis,d1[i]+d2[i]+d3[i]);
    }
 }
}
cout<<dis<<endl;
 
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll t=1;// cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}
 
 
 
 
 
 
 