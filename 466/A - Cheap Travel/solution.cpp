#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main (){
ll n,m,a,b; cin>>n>>m>>a>>b;
if(b/m<a){
    cout<<min((n/m)*b + (n%m)*a , ((n/m)+1)*b)<<endl;
}
else cout<<n*a<<endl;
 
 
 
 
 
 
 
    return 0;
}