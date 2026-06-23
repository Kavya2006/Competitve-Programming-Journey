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
 
 
void Solve(){
ll x,y,z,k; cin>>x>>y>>z>>k;
/*
first loop from 1 to x if k%x then loop from 1 to y if v%y==0 then if z<rem 
then volume is x1*y1*z1 ; from ans=max(ans,(x-x1+1)*(Y-y1+1)*(z-z1+1))
this is like suppose we have 3 3 3 8 , here only combination is 2 2 2 to get 
volume 8 , and in x axis we can put box on 0 and 1 similarly in y and z
so options we have is y-y1+1 =3-2+1 =2
 
 
*/
ll t=k;
ll ans=0;
for(ll i=1 ; i<=x ; i++){
    t=k;
 if(t%i==0){
    t=t/i;
    for(ll j=1 ; j<=y ; j++){
        t=k/i;
        if(t%j==0){
            t=t/j;
            if(z>=t && t>=1){
                ll z1=t;
                ans=max(ans,(x-i+1LL)*(y-j+1LL)*(z-z1+1LL));
            }
        }
    }
 }
 
}
cout<<ans<<endl;
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll t=1;   cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}
 
 
 
 
 
 
 