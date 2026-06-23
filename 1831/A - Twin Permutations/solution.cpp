#include <bits/stdc++.h>
using namespace std;
 
// Types
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
 
// Shortcuts
#define pb      push_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
 
// Common containers
using vi  = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vpi = vector<pii>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    int n; 
    while(t--){
    cin>>n ; 
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    // my logic if i give everyone its conjugate all will be equal thus satisfying the condition
    vector<int>b(n);
    for(int i=0 ; i<n ; i++ ){
    b[i]=n-a[i]+1; 
    cout<<b[i]<<" ";
    }
    cout<<endl;
 
 
    }
 
return 0; }