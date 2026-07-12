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
 
// Call this function ONCE inside main() before the test cases loop
void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}
 
// ✅ nCr (Combination n choose r) using Fermat’s Little Theorem
ll nCr_mod(ll n, ll r, ll mod = MOD) {
    if (r > n || r < 0) return 0;
    ll numerator = fact[n];
    ll denominator = (fact[r] * fact[n - r]) % mod;
    return (numerator * power(denominator, mod - 2, mod)) % mod;
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
suppose 1,2,3 is the array
suppose alice do nothing
now bob suppose does nothing , alice removes 1
now 2,3 , moves=1
now bob makes its 3,2
now alice 2,2 , move=2
1,1 move=3
0,1 move=4
0,0 , move=5 so bob can play more optimally ig as answer is 6
 
so suppos bob reorders to 3,2,1
now alice makes it 2,2,1 , move=1
now bob makes it 2 1 2
now alice 1 1 2 , move=2
now its solved only 2+4=6 moves total so yeah
so bob like tries to put something odd after even
or something odd at starting thing to tang allice
 
6 8 2 4 1
now allice basically makes 1 as 2 so bob no interference
now allice ,chop all , 3,4,1,2,1  ->1
now bob nothing
alice 2,4,1,2,1   ->2
bob - 2 1 4,2,1
alice - 1,1,4,2,1 ->3
bob - 4,1,1,2,1
alice 2,1,1,2,1 ->4
alice-1,1,1,2,1 ->5
 
// so something something if bob has atleast one odd
he would put that odd to stop allice thing
 
now in 1,3,5,7,9,11,13
here ans=1- 1
3-> 2,1,0->3
5-> 4,2,1,0 -so 4
7-> 6,3,2,1,0 , so 5
9-> 8,4,2,1,0 ->5
11-> 10,5,4,2,1,0->6
13->12,6,3,2,1,0->6
so ans=1+3+4+5+6+6=25 but ans given is 35 howww
oh wait 15 also
15, 14,7,6,3,2,1,0-7 , so 32 , did i missss.....
 
in 1,2,3
1-0> 1
2-1-0 ->2
3, 2,1,0 - 3 correct
 
2,2,2,2 , here chop all=1,1,1,1, now 4=5
6,8,2,4,1-> here make 1 as 2 and chop
so we get 3,4,1,2,1 and init=1
so now 3+3+1+2+1=10 , 10+1=11
but guess what answer is 12 so bob can mess it up more??
oh finally got it lol after5 mins of reading
initally we adding 1 so it also counted as move so +1=12
 
now to 1 3 5 7 9 11 13 15
only good choice is to make 15 as 16 , and taking 1 as it is power of 2
so now 1+3+4+5+5+6+6+5 +1=36
so there should be something better
so like can i calculate for element which is better
them or their 2 increments coz why not
so for 7,->6,3,2,1,0->5 , 8->4,2,1,0->4 both equal
but 8 is even
what if i also try making all even
and test this thinggg
 
 
 
 
 
 
 
 
*/
ll costfinder(ll i){
    ll ans=0;
    while(i>0){
        if(i%2==1){
            i--;
            ans++;
        }
        else{
            i=i/2;
            ans++;
        }
    }
    return ans;
}
 
void Solve() {
    ll n; 
    cin>>n;
    vector<ll>a(n);   
    ll cost=0;
    for(ll i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i]%2){
            cost++;
        }
    }
    ll ans=INF;
 
   
 
    for(ll m=0; m<=20; m++){
      
        ll ok=m;
        ll op=0;
        ll kk;
        ll shift=(1LL<<m);
        for(ll i=0; i<n ; i++){
            kk=INF;
            ll baseadd=0;
            ll rem=a[i]%shift;
            ll chop;
            if(rem!=0){
               baseadd=shift-rem;
            }
           chop=(a[i]+baseadd)/shift;
            for(ll j=0; j<=20; j++){
               kk=min(kk,costfinder(chop+j)+j*shift+baseadd);
            }
            op+=kk;
            
        }
        ans=min(ans,op+m);
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