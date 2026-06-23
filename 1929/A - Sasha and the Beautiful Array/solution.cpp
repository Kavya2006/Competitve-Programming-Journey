#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void Solve(){
ll n; cin>>n;
vector<ll>a(n);
for(auto &i : a){
      cin>>i;
}
sort(a.begin(),a.end());
cout<<a[n-1]-a[0]<<endl;
return;
}
int main(){
      ll t=1; cin>>t;
      while(t--){
            Solve();
      }
}