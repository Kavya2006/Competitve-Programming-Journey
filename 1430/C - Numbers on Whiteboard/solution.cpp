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
 
ll n; cin>>n;
// suppose 4
// we should get numbers of same parity to get min
// here we can take 2,4 to get 3, then 3,3 to get 3 then 3,1 to get 2
// but if we do like 1,3 we get 2 now 2,2 will give 2 but 2,4 will give 3
// so not optimal
// n=6'
// 2,6 then 1,3 then 2,4 to get 3
// n=5 lets think , 1,5 to get 3 , 2,4 to get 3 then 3,3 to get 3
// i guess min we can get is n*(n+1)/2*n = (n+1)/2;
// suppose 10 , then 2,10 3,9 4,8 5,7 all these give 6 then merege all
// then 6 and 1 which gives 4 so (n+1)/2 was wrong ig
//  n=5 thing mein , suppose we leave 1 again here , combine 2,5 and 3,4 to 
// 1 and 4 to get 3
// in 4 one , suppose 2,4 then 3,3 then 1,3 to get 2
// lets take 8 leave 1 , then 2,8 3,7 4,6 all give 5 then get 3
// n=6 lets take 1 leave 2,6 3,5 ,4 then remain with 1,4 to get 3
// 
/*if(n%2==0){
cout<<((2+n/2)+1)/2<<endl;
ll k=1+n/2;
for(ll i=2; i<=n/2 ; i++){
 cout<<i<<" "<<n-i+2<<endl;
}
for(ll i=0 ; i<n/2-1; i++){
cout<<k<<" "<<k<<endl;
}
cout<<"1 "<<k<<endl;
}
else{
    cout<<((3+n)/2+2)/2<<endl;
    ll k=(n+3)/2;
for(ll i=2; i<=n/2+1 ; i++){
 cout<<i<<" "<<n-i+2<<endl;
}
for(ll i=0 ; i<n/2-1; i++){
cout<<k<<" "<<k<<endl;
}
cout<<"1 "<<k<<endl;}
*/
// ok yeah messed up lets think better
// suppose n=6 , then 5,6 result 6 then 4,6 result 5 , then 3,5 resuklt 4
// then 2,4 result 3, then 3,3 result 3 then 1,3 =2
// n-5 , then 4,5 5 and 3,5 then 4 then 2,4 then 3 then 1,3 we get 2
// so technically we can get always a final answer of 2
cout<<2<<endl;
ll sum=n;
for(ll i=n-1; i>=1 ; i--){
    cout<<sum<<" "<<i<<endl;
    sum=(sum+i+1)/2;
}
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   
    ll t=1;  cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}
 
 
 
 
 
 
 