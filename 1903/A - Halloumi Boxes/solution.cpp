#include <bits/stdc++.h>
#include <numeric>
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
    int n,k;
    string s;
    while(t--){
    cin>>n>>k;
    vector<long long int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    if(k>=2){
        cout<<"YES"<<endl;
    }
    if(k==1){
        bool isSorted = true;
        for(int i=0 ; i<n-1 ; i++){
          if(a[i]>a[i+1]){
             isSorted=false;
             break;
          }
        }
        if (isSorted){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    }
 
    return 0;
}