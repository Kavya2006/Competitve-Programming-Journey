// to find anything using keyword , use control+f
/* whenever integers very big , use long double ld
and suppose final answer is ans
// This prevents scientific notation and prints 0 decimal places
cout << fixed << setprecision(0) << ans << "
";
as long double can go upto 1e4000 something that is 10^4000
*/
 
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
 
/*  CUSTOM HASH MAP , UNORDERED MAP , O(1) ALL OPERATIONS
 
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
// Now you can safely use it like this:
unordered_map<ll, ll, custom_hash> freq;
 
 
JUST UNCOMMENT IT WHENEVER I WANT TO USE , this hash enough for everything and as many unordered maps
*/
 
// ---------------------------DSU-----------------------------------
struct UnionFind{
 vector<ll>par;
 vector<ll>rank;
  vector<ll>size; //we can use size also instead of rank , here size is basically total no of roots in the componenet
  // size is prefered to use instead of  rank , same t.c in both btw
 void init(ll n){
    par.assign(n+1,0);    // assign completely overwrites the vector: (new_size, default_value)
    rank.assign(n+1,0);
     size.assign(n+1,0);
    for(ll i=1 ; i<=n ; i++){
        par[i]=i;
        rank[i]=0; // coz no roots as of now
       size[i]=1;
    }
 }
 ll root(ll x){ // worst case o(n)
    if(x==par[x]){
        return x;
    }
    else{
        par[x]=root(par[x]); // path compression
 
        return par[x];
        /*The par array will eventually store the ultimate root for every node, completely erasing the "real" (immediate) parent history.
       But here is the secret of DSU: We do not care about the original tree structure!
         DSU is not like a traditional tree (like a Binary Search Tree or a Family Tree) where the exact parent-child 
         relationship matters. The only question DSU is designed to answer is: "Are Node Aand Node B in the same group?"
        */
    }
 }
 bool merge(ll x, ll y ){
    x=root(x);
    y=root(y);
    if(x!=y){
       if(size[x]<size[y]){ 
        swap(x,y);
       }
          par[y]=x;
          
          size[x]+=size[y];
       
   // if(rank[x]>rank[y]){ // rank compression
    //  par[y]=x; // we join the smaller componenet in which there is y and make x its parent
   // }
  //  else if(rank[y]>rank[x]){
  //      par[x]=y;
  //  }
   // else if(rank[x]==rank[y]){
   //     par[y]=x;
        // as x me same rank as x getting attached so rank of x increase by one
   //     rank[x]++;
  //  }
    
    return true;
    }
    else{
        return false;
    }
 }
 ll comp_size(ll x){
    return size[root(x)];
 }
 
};
 
 
 
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
// so see, if max element is greater than or equal sum of any 3 other elements
// then alice looses..
// if alice takes top 3 elements , if sum of first and second > third element
// for alice to win
// suppose 234 , so alice can take 2,3,4 and if bob takes 4 also alice wins
// 3456 , if alice takes 3,4,5 still it wins as 6 is not enough
// even if bob takes 5 then also 3+4>5
// 3,4,5,10 suppose its like this , so alice should avoid the last element
// so alice should take 3,4,5 and bob takes 10 still alice win
// but if alice takes 4,5,10 , bob takes 10 and wins
// so 2 cases total ig
// 1 -> , sum of other 2 elements > largest
// 2-> , sum of other 3 > largest and , in these 3 , sum of other 2 > largest
sort(a.begin(),a.end());
ll ans=0;
// so loop from n-1 , a[n-i-1]+rndm>a[i]
// rndm>a[n-1]-a[j]
for(ll i=n-2 ; i>=1 ; i--){
 auto it=upper_bound(a.begin(),a.begin()+i,a[n-1]-a[i]);
 ll k=it-a.begin();
k=i-k;
 if(k==0){
    break;
 }
 else{
    ans+=k;
 }
}
 
// now case 2
// rndm>a[n-1]-a[n-1-i]-a[n-1-j] // also rndm+a[j]>a[i]
for(ll i=n-2 ; i>=2 ; i--){
    for(ll j=i-1; j>=1 ; j--){
        auto it=upper_bound(a.begin(),a.begin()+j,a[n-1]-a[i]-a[j]);
        auto it2=upper_bound(a.begin(),a.begin()+j,a[i]-a[j]);
        ll k=it-a.begin();
        ll k2=it2-a.begin();
        k=max(k,k2);
        k=j-k;
 
            ans+=k;
    }
}
 
cout<<ans<<endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll t=1; cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}
 
 
 
 
 
 
 