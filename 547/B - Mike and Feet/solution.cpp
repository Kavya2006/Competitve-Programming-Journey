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
void Solve(){
ll n; cin>>n;
vector<ll>a(n);
for(int i=0 ; i<n ; i++){
    cin>>a[i];
}
//10
// 1 2 3 4 5 4 3 2 1 6
// so strenght of 1 is just max element which is 6
// so strneght of 2 will be like min of 4 and 5 ig which is 4
 
// so for each element , suppose x is 4
// we find nge of each then put that answer in distance group thing
 
// similarly we find pse and put pse in that group ans
vector<ll>ans(n+1,0);
/*
vector<ll>nge(n);
vector<ll>pse(n);
for(ll i=0 ;i<n ; i++){
    pse[i]=i-1;
    while(pse[i]!=-1 && a[pse[i]]>a[i]){
        pse[i]=pse[pse[i]];
    }
}
for(ll i=n-1 ;i>=0 ; i--){
 
} */
 
// instead of this ig , we take each element and find its nse and pse
// then for all groups from (pse to nse)size this element can be the answer
// and if this element is suppose part of k size group then obv can be of k-1 and k-2 and so on , ig i got this lets code this , today i will destroy these qs
vector<ll>nse(n);
vector<ll>pse(n);
for(ll i=0 ;i<n; i++){
    pse[i]=i-1;
    while(pse[i]!=-1 && a[i]<=a[pse[i]]){
        pse[i]=pse[pse[i]];
    }
}
for(ll i=n-1 ; i>=0 ; i--){
    nse[i]=i+1;
    while(nse[i]!=n && a[i]<=a[nse[i]]){
        nse[i]=nse[nse[i]];
    }
}
for(ll i=0 ; i<n ; i++){
    ll size=nse[i]-pse[i]-1;
    ans[size]=max(ans[size],a[i]);
}
for(ll i=n ; i>0 ; i--){
  ans[i-1]=max(ans[i],ans[i-1]);
}
 
for(ll i=1 ; i<=n ; i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
 
 
 
 
 
 
 
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
 
 
 
 
 
 
 