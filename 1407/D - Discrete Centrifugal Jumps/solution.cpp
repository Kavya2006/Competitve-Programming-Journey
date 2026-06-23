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
 
 
// so greedy wont work here ig
// because even if suppose nse is farther than nge
// for next jump nge might lead to a better outcome
// lets make first answer thing for each as we can do i+1==j always
vector<ll>ans(n);
for(ll i=0 ; i<n ; i++){
    ans[i]=i; // max jumps to reach a i
}
vector<ll>nge(n);
vector<ll>nse(n);
vector<ll>pse(n);
vector<ll>pge(n);
/*
for(ll i=0 ; i<n ; i++){
    pse[i]=i-1;
    pge[i]=i-1;
    while(pse[i]!=-1 && a[pse[i]]>a[i]){
        pse[i]=pse[pse[i]];
    }
    while(pge[i]!=-1 && a[pse[i]]<a[i]){
        pse[i]=pse[pse[i]];
    }
}
for(ll i=n-1 ; i>=0 ; i--){
    nse[i]=i+1;
    nge[i]=i+1;
    while(nse[i]!=n && a[nse[i]]>a[i]){
        nse[i]=nse[nse[i]];
    }
    while(nge[i]!=n && a[nge[i]]<a[i]){
        nge[i]=nge[nge[i]];
    }
}
// now for a particular index , ans will be min of(curr value , pse+1,pge+1)
for(ll i=0; i<n ; i++){
    if(pse[i]!=-1){
        ans[i]=min(ans[i],ans[pse[i]]+1);
    }
    if(pge[i]!=-1){
        ans[i]=min(ans[i],ans[pge[i]]+1);
    }
}
cout<<ans[n-1]<<endl; */
 
// i have done something wrong , maybe i have to find immedite greatest
// and immediate shortest value
 
/*vector<ll>ipse(n,-1);
vector<ll>ipge(n,-1);
map<ll,ll>mp;
for(ll i=0 ; i<n ; i++){
 auto it1=mp.lower_bound(a[i]);
 if(it1!=mp.end()){
    ipge[i]=(*it1).S;
 }
 auto it2=mp.upper_bound(a[i]);
 if(it2!=mp.begin()){
    it2--;
    if(it2!=mp.begin()){
         ipse[i]=(*it2).S;
    }
 }
 mp[a[i]]=i;
 
}
for(ll i=0; i<n ; i++){
    if(ipse[i]!=-1){
        ans[i]=min(ans[i],ans[ipse[i]]+1);
    }
    if(ipge[i]!=-1){
        ans[i]=min(ans[i],ans[ipge[i]]+1);
    }
}
cout<<ans[n-1]<<endl; */
 
for(ll i=0 ; i<n ; i++){
    pse[i]=i-1;
    pge[i]=i-1;
    while(pse[i]!=-1 && a[pse[i]]>a[i]){
        pse[i]=pse[pse[i]];
    }
    while(pge[i]!=-1 && a[pge[i]]<a[i]){
        pge[i]=pge[pge[i]];
    }
 
}
for(ll i=n-1 ; i>=0 ; i--){
    nse[i]=i+1;
    nge[i]=i+1;
    while(nse[i]!=n && a[nse[i]]>a[i]){
        nse[i]=nse[nse[i]];
    }
    while(nge[i]!=n && a[nge[i]]<a[i]){
        nge[i]=nge[nge[i]];
    }
}
// so basically if previous element se idhar aana possible we take
// for both pge and pse
// and is element se iske 
 
// but here most imp thing i missing was like to go to my nge and nse
// which i wouldnt be able to do from that
// like 3,2,4 // here from 3 nge is 4 , but for 4 pse is not 3
// so from 3 only we should also make its nge and nse dp as min as possible
for(ll i=0 ; i<n ; i++){
     if(pse[i]!=-1){
        ans[i]=min(ans[i],ans[pse[i]]+1);
    }
    if(pge[i]!=-1){
        ans[i]=min(ans[i],ans[pge[i]]+1);
    }
    // got it ig , i should first extract best value and then only pass it
    // i like i guess was sending first
 
 
    if(nge[i]!=n){
        ans[nge[i]]=min(ans[nge[i]],ans[i]+1);
    }
    if(nse[i]!=n){
        ans[nse[i]]=min(ans[nse[i]],ans[i]+1);
    }
   
 
    
}
cout<<ans[n-1]<<endl;
 
 
 
 
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
 
 
 
 
 
 
 