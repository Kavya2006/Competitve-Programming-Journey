// to find anything using keyword , use comand+f
/* whenever integers very big , use long double ld
and suppose final answer is ans
// This prevents scientific notation and prints 0 decimal places
cout << fixed << setprecision(0) << ans << "
";
as long double can go upto 1e4000 something that is 10^4000
*/
 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
const int MOD =int(1e9)+7; // change value oF MOD here if u want something raise to power modulo k
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
 
// --- BITWISE MACROS ---
#define popcount(x) __builtin_popcountll(x)  // Count number of 1s
#define clz(x)      __builtin_clzll(x)       // Count leading zeros
#define ctz(x)      __builtin_ctzll(x)       // Count trailing zeros
 
// 1. Most Significant Bit (Floor of log2)
// Returns the 0-based index of the highest set bit. 
// Super useful for Sparse Tables, Segment Trees, and math.
// Note: __lg is a GCC built-in, just like the __builtin ones!
#define msb(x) (x == 0 ? -1 : __lg(x))
// coz log2(0) not defined so it will give -1 now
 
// 2. Least Significant Bit Value
// Returns the actual VALUE of the lowest set bit (e.g., lsb(12) returns 4).
// This is the backbone of Fenwick Trees (Binary Indexed Trees).
#define lsb(x)      ((x) & -(x))
 
// 3. Power of 2 Check
// Returns true if x is a power of 2 (1, 2, 4, 8...). 
// The (x > 0) prevents 0 from falsely returning true.
#define isPow2(x)   ((x) > 0 && !((x) & ((x) - 1)))
 
// 4. Bit Manipulation Shortcuts (Optional but handy)
// Replaces clunky shifts and brackets so you don't mess up order of operations.
#define getBit(x, i)    (((x) >> (i)) & 1)     // Check if i-th bit is 1
#define setBit(x, i)    ((x) | (1LL << (i)))   // Turn i-th bit on
#define toggleBit(x, i) ((x) ^ (1LL << (i)))   // Flip i-th bit
 
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
 
 
// ------------------------- Main Logic ------------------------- //
ll n,k;
vector<vector<ll>>fact;
vector<vector<ll>>dp;
ll rec(ll i , ll j){
    if(i==k){
        return 1;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    ll ans=0;
    for(ll m=0; m<fact[j].size(); m++){
       ans=(ans+rec(i+1,fact[j][m]))%MOD;
    }
    return dp[i][j]=ans;
}
 
 
void Solve() {
   
  cin>>n>>k;
    fact.assign(n+1,vector<ll>());
    for(ll i=1; i<=n; i++){
        for(ll j=i; j<=n; j+=i){
            fact[i].push_back(j);
        }
    }
    dp.assign(k+1,vector<ll>(n+1,-1));
    ll ans=0;
    for(ll i=1; i<=n;i++){
       ans=(ans+rec(1,i))%MOD;
    }
    cout<<ans<<endl;
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
   // precompute_factorials(); 
   
    ll t = 1; 
   //cin >> t;
    while(t--) {
        Solve();
    }
 
    return 0;
}