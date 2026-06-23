#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main (){
ll n,k; cin>>n>>k;
vector<ll>a(n);
ll count=0;
for(auto &i : a){
    cin>>i;
    
}
for(auto &i : a){
    if (i>=a[k-1] && i>0){
        count++;
    }
    
}
 
cout<<count<<endl;
    return 0;
}