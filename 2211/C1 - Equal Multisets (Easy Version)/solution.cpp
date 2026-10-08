#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "
"
#define pb push_back
using ll = long long;
constexpr int INF = 1e18;
constexpr int MOD = 1e9 + 7;
 
 
void solve() {
  ll n,k; cin>>n>>k;
  vector<ll>a(n);
  vector<ll>b(n);
  map<ll,ll>freq;
  map<ll,ll>freq2;
  for(auto &i : a){
      cin>>i;
  }
  bool pos=1;
  for(auto &i : b){
      cin>>i;
      if(i!=-1){
      freq2[i]++;
      if(freq2[i]>1){
          pos=0;
      }
      }
  }
  if(!pos){
      cout<<"NO
";
      return;
  }
  for(ll i=0; i<n; i++){
      freq[a[i]]=i;
  }
  for(ll i=0; i<n; i++){
      if(b[i]==-1){
          continue;
      }
      ll idx=freq[b[i]];
      if(idx==i){
          continue;
      }
      if(idx<i){
          if(i>=k){
              cout<<"NO
";
              return;
          }
          if(n-1-idx>=k){
              cout<<"NO
";
              return;
          }
      }
      else{
           if(idx>=k){
              cout<<"NO
";
              return;
          }
          if(n-1-i>=k){
              cout<<"NO
";
              return;
          }
      }
  }
  cout<<"YES
";
  return;
  
}
 
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t = 1;
	cin >> t;
	while (t--) {
	    solve();
	}
    
    return 0;
}