// to find anything using keyword , use control+f
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; // change value oF MOD here if u want something raise to power modulo k
#define F first
#define S second
const long long INF = 1e14;
 
// Types
using ll  = long double;
using ull = unsigned long long;
using ld  = long double;
 
// Shortcuts
#define pb      push_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
#define endl '
' 
 
 
void Solve(){
ll n; cin>>n;
vector<ll>a(n);
for(int i=0 ; i<n ; i++){
    cin>>a[i];
}
// constaints pretty toughhhhh
// might have to think contri technique ig
map<ll,ll>mp;
ll ans=0;
ll currsum=-a[0];
mp[a[0]]++;
 
for(ll i=1 ; i<n ;i++){
    ll take=i;
    ll l=0,r=0,m=0;
    auto it=mp.find(a[i]-1);
    if(it!=mp.end()){
        take-=(*it).S;
        l+=((*it).S);
    }
    auto it2=mp.find(a[i]+1);
    if(it2!=mp.end()){
        take-=(*it2).S;
        r+=(*it2).S;
    }
    auto it3=mp.find(a[i]);
    if(it3!=mp.end()){
        take-=(*it3).S;
        m+=(*it3).S;
    }
    
    ans+=(take+m+r+l)*(a[i])+currsum+r-l;
    mp[a[i]]++;
    currsum-=a[i];
 
}
cout<<fixed<<setprecision(0)<<ans<<endl;
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll t=1; //cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}
 
 
 
 
 
 
 