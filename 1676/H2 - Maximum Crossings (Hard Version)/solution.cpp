/*
Perform the following Q queries on an initially Empty Set:
1 X - Insert X element in the set
2 X - Remove X from the set
3 X - Print No. of elements smaller than X in the current set
4 X - Print element present at the Xth index in the current set
*/
 
/* 1) USING A VECTOR
1 X - Insert X element in the set
O(N) if we want to keep it sorted, o(n*q) will tle
 
2 X - Remove X from the set
O(N) to remove element at any arbitrary index , o(n*q) will tle
 
3 X - Print No. of elements smaller than X in the current set
O(logN) Binary Search
 
4 X - Print element present at the Xth index in the current set
O(1) Index Access
*/
 
/* 2) USING A SET
1 X - Insert X element in the set
O(logN)
 
2 X - Remove X from the set
O(logN)
 
3 X - Print No. of elements smaller than X in the current set
O(N) Cannot binary search on a set , will tle
 
4 X - Print element present at the Xth index in the current set
O(N) No concept of Index in a set, will tle
*/
 
/* 3- Using PBDS (Ordered Set)
1 X - Insert X element in the set
O(logN)
 
2 X - Remove X from the set
O(logN)
 
3 X - Print No. of elements smaller than X in the current set
O(log n) Cannot binary search on a set , 
 
4 X - Print element present at the Xth index in the current set
O(log n) No concept of Index in a set, 
 
// so total t.c = o(q*log(n)) , so good enough
 
*/
// 1. Include the PBDS headers
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
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
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll ans=0;
    pbds<pair<ll,ll>>a;
    ll n; cin>>n;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        ans+=(i-a.order_of_key({x,-1}));
        a.insert({x,i});
    }
    cout<<ans<<endl;
 
    
}
int main(){
    ll t; cin>>t;
    while(t--){
    solve();
    }
    return 0;
}