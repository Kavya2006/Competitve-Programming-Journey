#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
 
void Solve(){
ll n; cin>>n;
vector<ll>a(n);
vector<ll>ans;
ll nott=0;
ll total=0;
for(int i=0 ; i<n ; i++){
    cin>>a[i];
    if(a[i]>=2){
        ans.push_back(a[i]);
        total+=a[i];
    }
    else{
        nott+=a[i];
    }
}
 
ll i=0;
if(ans.size()==0){
    cout<<0LL<<endl;
    return;
}
 
if(ans.size()==1){
    ll k=total+min(ans[0]/2LL,nott);
    if(k<3){
        cout<<0<<endl;
    }
    else{
        cout<<k<<endl;
    }
    return;
}
 
 
   while(i!=ans.size() && nott!=0LL){
            total+=min(ans[i]/2LL -1LL,nott);
            nott-=min(ans[i]/2LL -1LL,nott);
            i++;
   }
cout<<total<<endl;
return;
 
 
 
 
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    ll t=1; cin>>t;
  while(t--){
 Solve();
 }
 
 
return 0;
}