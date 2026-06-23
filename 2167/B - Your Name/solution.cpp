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
    int q ; cin>>q;
   int n;
   
    while (q--){
    int count=0;
    cin>>n;
    vector<char>s(n);
    vector<char>t(n);
    for(int i=0 ; i<n ; i++){
        cin>>s[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>t[i];
    }
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());
    for(int i=0 ; i<n ; i++){
      if(s[i] == t[i]) {
        count++;
      }
    }
    if (count==n) {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
 
    }
    
 
 
return 0;
}