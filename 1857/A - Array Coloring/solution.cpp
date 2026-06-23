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
    vector<int>a(n); 
    int count=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(a[i]%2 != 0){
            count++;
        }
    }
    if(count%2 != 0){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    
    
    
 
 
    }
 
 
return 0;
}