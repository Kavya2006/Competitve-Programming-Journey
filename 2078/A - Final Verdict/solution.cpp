#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void Solve(){
 ll n,x; cin>>n>>x;
 vector<ll>a(n);
 ll sum=0;
 for( auto &i : a){
       cin>>i;
       sum+=i;
 }
 if (sum==x*n){
       cout<<"Yes
";
 }
 else cout<<"No
";
 
 
      
}
int main (){
      ll t; cin>>t;
      for(int i=0 ; i<t; i++){
     Solve();
           }
      
      return 0;
}