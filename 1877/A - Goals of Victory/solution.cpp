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
    cin>>n; 
    int count =0;
   
    vector<int>a(n);
    
    for(int i=0 ; i<n-1 ; i++){
        cin>>a[i];
            count=count+a[i];
        
    }
    cout<< 0 - count<<endl;
    }
 
return 0;
}