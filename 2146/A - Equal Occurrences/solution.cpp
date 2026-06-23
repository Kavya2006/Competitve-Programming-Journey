#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
 
bool Compare(pair<ll,ll>p1,pair<ll,ll>p2){
    return p1.second<p2.second;
}
 
void Solve(){
    ll n; cin>>n;
    vector<ll>a(n);
    set<ll>s;
    for(auto &i : a){
        cin>>i;
        s.insert(i);
    }
  vector<pair<ll,ll>>b(s.size());
  ll temp=0;
  ll ok=a[0];
  ll j=0;
  for(ll i=0 ; i<n ; i++){
      if(a[i]==ok){
          temp++;
      }
      else{
          b[j].first=a[i-1];
          b[j].second=temp;
          temp=1;
          ok=a[i];
          j++;
      }
  }
  if(temp>0){
      b[j].first=a[n-1];
      b[j].second=temp;
  }
  ll ans=0;
 sort(b.begin(),b.end(),Compare);
 for(ll i=0 ; i<b.size(); i++){
     ans=max(ans,ll((s.size()-i)*b[i].second));
 }
 
  cout<<ans<<endl;
  return;
}
 
 
int main() {
    ll t; cin>>t; while(t--){
	 Solve();
    }
}