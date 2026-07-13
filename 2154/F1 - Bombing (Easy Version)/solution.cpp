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
 
const int MOD = 998244353; // change value oF MOD here if u want something raise to power modulo k
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
 
/* --------POLICY BASED DATA STRUCTURE (PBDS) -------- */
 
// this is for pbds(oredered set)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
// This creates a template alias
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// less<T> puts in increasing order , if we have to change it to decreasing order we can do greater<T> 
/*
====================================================================
           PBDS (ORDERED SET) CHEAT SHEET & FUNCTIONS
====================================================================
 
--- 1. THE "MAGIC" FUNCTIONS --- Time: O(log N)
* find_by_order(k) : Returns an ITERATOR to the k-th smallest element (0-indexed). 
                     -> To get the value, dereference it: *A.find_by_order(k)
                     -> If k >= A.size(), it returns A.end()
 
* order_of_key(x)  : Returns an INTEGER, the exact number of elements strictly smaller than x.
                     -> Works even if x is NOT present in the set!
 
--- 2. STANDARD SET FUNCTIONS --- Time: O(log N)
* insert(x)        : Inserts element x. (Ignored if x already exists in a standard ordered_set).
* erase(x)         : Removes element x if it exists. (Do NOT use with less_equal).
* erase(iterator)  : Removes the element at the given iterator.
* lower_bound(x)   : Returns iterator to the first element >= x.
* upper_bound(x)   : Returns iterator to the first element > x.
 
--- 3. SIZE & UTILITY --- Time: O(1)
* size()           : Returns the number of elements currently in the set.
* empty()          : Returns true if the set is empty, false otherwise.
* clear()          : Empties the entire set. Time: O(N)
 
--- 4. ADVANCED PBDS EXCLUSIVES --- Time: O(log N)
* join(other_set)  : Merges 'other_set' into the current set. 'other_set' becomes empty.
                     WARNING: All elements in one set MUST be strictly greater than 
                     all elements in the other, otherwise this throws a runtime error!
 
* split(x, other)  : Splits the set. The current set keeps all elements <= x. 
                     The 'other' set receives all elements > x.
====================================================================
*/
/*
====================================================================
           IF USING greater<int> (DESCENDING ORDER)
====================================================================
* The set is sorted largest-to-smallest (e.g., {50, 40, 30, 20, 10}).
* find_by_order(k) : Now returns the k-th LARGEST element.
                     -> k=0 gives the maximum element.
* order_of_key(x)  : Now returns the number of elements STRICTLY GREATER than x.
====================================================================
*/
 
 
/* -------- CUSTOM HASH MAP , UNORDERED MAP , O(1) ALL OPERATIONS --------
 
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
  vector<ll>siz; //we can use siz also instead of rank , here siz is basically total no of roots in the componenet
  // siz is prefered to use instead of  rank , same t.c in both btw
 void init(ll n){
    par.assign(n+1,0);    // assign completely overwrites the vector: (new_size, default_value)
    rank.assign(n+1,0);
     siz.assign(n+1,0);
    for(ll i=1 ; i<=n ; i++){
        par[i]=i;
        rank[i]=0; // coz no roots as of now
       siz[i]=1;
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
       if(siz[x]<siz[y]){ 
        swap(x,y);
       }
          par[y]=x;
          
          siz[x]+=siz[y];
       
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
    return siz[root(x)];
 }
 
};
 
//-------------------SEG-TREE--------------------------------------------//
/*
struct Node{
ll sum;
 Node(ll v){
    sum=v;
 }
 Node(){
    sum=0;
 }
};
 
Node Merge(Node left , Node right){
    Node res;
    res.sum=left.sum+right.sum;
    return res;
}
 
vector<Node>Segtree;
 
void build(ll i , ll l , ll r){
    if(l==r){
        Segtree[i]=Node(a[l]);
        return;
    }
    ll mid=(l+r)/2;
    build(2*i,l,mid);
    build(2*i+1,mid+1,r);
    Segtree[i]=Merge(Segtree[2*i],Segtree[2*i+1]);
}
 
void update(ll i , ll l , ll r , ll pos , ll x){
  ll mid=(l+r)/2;
  if(l==r){
    a[pos]=x;
    Segtree[i]=Node(x);
    return;
  }
  if(pos<=mid){
    update(2*i,l,mid,pos,x);
  }
  else{
    update(2*i+1,mid+1,r,pos,x);
  }
  Segtree[i]=Merge(Segtree[2*i],Segtree[2*i+1]);
}
 
Node Query(ll i , ll l , ll r, ll lq, ll rq){
    if(lq>r || l>rq){
        return Node();
    }
    if(lq<=l && rq>=r){
        return Segtree[i];
    }
    ll mid=(l+r)/2;
    Node left=Query(2*i,l,mid,lq,rq);
    Node right=Query(2*i+1,mid+1,r,lq,rq);
    return Merge(left,right);
}
*/
 
// ------------------------- Utility Functions ------------------------- //
 
// ✅ GCD (Greatest Common Divisor)
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
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
 
// ✅ Fast Power (without mod)
ll power_ll(ll a, ll b) {          // if we dont want to take the mod of result 
    ll res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
// ✅ Precise Integer Square Root
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
 
// ------------------------- Combinatorics (O(N) Precompute, O(log M) Query) ------------------------- //
const int MAXN = 2e5 + 5; // Adjust based on problem constraints
ll fact[MAXN];
ll invFact[MAXN];
 
// Call this function ONCE inside main() before the test cases loop
void precompute_factorials() {
    fact[0] = 1;
    invFact[0]=1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAXN - 1] = power(fact[MAXN - 1], MOD - 2, MOD);
    // Work backwards to calculate all other inverses in O(N) time
    for (int i = MAXN - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}
 
// ✅ nCr (Combination n choose r) using Fermat’s Little Theorem
ll nCr_mod(ll n, ll r, ll mod = MOD) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % mod * invFact[n - r] % mod;
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
 
// ------------------------- Custom Sorting Comparators ------------------------- //
 
// Check if string 's' is a substring of string 'x'
bool isSub(const string &x, const string &s) {
    return x.find(s) != string::npos;  
}
 
// Sort in descending order
bool compare(int a1, int a2) {
    return a1 > a2;
}
 
// Sort pair by first element descending
bool Compare(pair<ll,ll>p1 , pair<ll,ll>p2 ){
    return p1.first > p2.first;
}
 
// Sort pair by second element ascending
bool CompAre(pair<ll,ll>p1 , pair<ll,ll>p2 ){
    return p1.second < p2.second;
}
 
// ------------------------- Main Logic ------------------------- //
/*
-1 -1 -1 2 -1
 1  2  3  4 5
so now 2 is ar 4th perm in this
and in that 2 is at 2nd position
so 2 should be at 1st or 2nd pos at max for doing it
so k=3rd position or k=2nd position
suppose k=2nd position
-1 -1 , -1 2 -1
now if we see -1 2 -1
here first -1 obv has to be 1 otherwise no possible
now we can select 3c1 to put here at right and rest and those two so 3 is ans here
 
now if chose k=3 , -1 -1 -1 , 2 -1
now element greater than 2 should be there so -1 can be 3,4,5
and remaining rest side in increasing order so here also ans=3 
so total ans=3+3=6
 
now if we analyse this -1 -1 -1 -1 -1
now no restr , so now for first pos , 5c1, for 2nd , 5c2, for third 5c3,
for 4th 5c4,  =2^5-1-1=30 but ans is 27
why??????
coz we can have like when we do 5c1 , and we select 1 and in 5c4 we select 2,3,4,5
and then in 5c2,we select 1,2 and in remainijgn 3,4,5
similarly in 5c3,5c4 , so 4 me se only 1 unique so 30-3=27 this is correct
 
1,2,3,4 obv sorted , ans=1
 
n=18
11 -1 2 -1 -1 -1 -1 6 -1 -1 14 8 9 15 -1 -1 -1 -1
now thing is 2 is smaller than 11 so k has to break here
but 8 is also smaller than 14 so also break here , then what shoudln't 
answer be 0 then?
oh wait i am misreading the qs from starttttt ffff
k should be a number i see
suppose here 2<11 and appears after , so k>=2 and k<11 coz otherwise 11 and 2 
come in same group
as we move 8<11 so another inequaily comes k>=8 and k<11
k>=9 and k<11 , 
so at final it comes k belongs to 9,10 only
if we take k=9 , 2,6,8,9 , 11,15
now between 2,6 there are 4 '-1' and we need atleast 3 of them to be their
so we select 4c3, then between 6,8 2-1 there we take 2c1, now rest to them
so case 1 total comb=4*2=8 , but one thing goes wrong
as in group 2 , we start from 10 and there is no place to put 10 so yeah ans=0
now in case 2 , almost everything same just k=10 , so at end we take another 4c1
so our answer comes 4c3*2c1*4c1=32 , so 32+0=32
 
*/
 
void Solve() {
    ll n; 
    cin>>n;
    vector<ll>b(n);   
    for(ll i = 0; i < n; i++) {
        cin>>b[i];
    }
    vector<ll>a(n,0);
    for(ll i=0; i<n; i++){
        a[i]=i+1;
    }
    if(b==a){
        cout<<1<<endl;
        return;
    }
    ll kmax=n-1;
    ll kmin=1;
    ll curr=-1;
    for(ll i=0; i<n ; i++){
       if(b[i]==-1){
        continue;
       }
       for(ll j=i+1; j<n; j++){
        if(b[j]==-1){
            continue;
        }
         if(b[i]>b[j]){
           kmin=max(kmin,b[j]);
           kmax=min(kmax,b[i]-1);
         }
       }
    }
    if(kmin>kmax){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    for(ll k=kmin; k<=kmax; k++){
      bool ok=1;
      ll ways=1;
      ll spaces=0;
      ll group1=0,group2=k;
      for(ll i=0; i<n; i++){
        if(b[i]==-1){
            spaces++;
            continue;
        }
        ll need;
        if(b[i]<=k){
            // now if b[i]=2 , and we were at 0, so we need 1 numbers spaces 
            need=b[i]-group1-1;
            group1=b[i];
            group2+=(spaces-need);// group 1 me jo not use give to group 2
        }
        else{
            //
            ll group2need=b[i]-group2-1;
            need=spaces-group2need;
            group2=b[i];
            group1+=need;
        }
        if(need<0 || need>spaces  ){
            ok=0;
            break;
        }
        ways=(ways*nCr_mod(spaces,need))%MOD;
        spaces=0;
      }
      if(ok){
        ll fneed=k-group1; // to like make remaining mmembers of group 1 get
        if(fneed<0 || fneed>spaces){
            continue;
        }
        else{
             ways=(ways*nCr_mod(spaces,fneed))%MOD;
             ans=(ans+ways)%MOD;
        }
      }
      
 
    }
    for(ll i=0; i<n; i++){
        if(b[i]==i+1){
            continue;
        }
        if(b[i]==-1){
            b[i]=i+1;
        }
    }
    if(b==a){
        ans=(ans-(n-2)+MOD)%MOD;
    }
    cout<<ans<<endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    precompute_factorials(); 
   
    ll t = 1; 
    cin >> t;
    while(t--) {
        Solve();
    }
 
    return 0;
}