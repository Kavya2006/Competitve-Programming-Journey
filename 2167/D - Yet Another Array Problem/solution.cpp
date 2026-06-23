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
 
 
int gcd( int n , int k){
if(n==k){
return n;
}  
else if(k>n) {
    return gcd(n,k-n);
}
else return gcd(n-k,k);
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
   long long int n;
   
    while (t--){
    cin>>n;
    vector<long long int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    
   bool stop = false;
    for(long long int i=2 ; i<=1000000000000000000; i++){
         
     for(long long int j=0 ; j<n ; j++){
        if( gcd(i , a[j]) == 1) {
            stop=true;
            break;
            }
      }
      
      if(stop == true){
          cout<<i<<endl;
          break;
      }
      if(i== 1000000000000000000){
          cout<<-1;
      }
      
    }
     
      
      }
    
 
return 0;
}