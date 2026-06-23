#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>b(1e6+1,1); // made this the global variable so all can use
void precompute(){
 
    b[0]=0;
    b[1]=0;
    for(ll i=2 ; i<=1e6 ; i++){
     if(b[i]==1){
        for(ll j=i*i ; j<=1e6 ; j=j+i){
            b[j]=0;
        }
     }
    }
 
 
 
}
 
 
void solve() {
ll n; cin>>n;
ll x;
for(int i=0 ; i<n ; i++){
    cin>>x;
    ll y=sqrtl(x); // used l in front coz x can be big
    if(b[y]==1 && y*y==x){
       cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
}
 
 
 
 
}
int main (){
    ll t=1;
    precompute();
    while(t--){
        solve();
    }
 
}