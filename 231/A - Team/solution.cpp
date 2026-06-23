#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main (){
ll count=0;
ll n; cin>>n;
while(n--){
    ll sum=0;
    vector<ll>a(3);
    for(int i=0 ; i<3 ; i++){
        cin>>a[i];
        if(a[i]==1){
            sum++;
        }
    }
    if(sum>=2){
        count++;
    }
}
cout<<count<<endl;
 
 
 
 
    return 0;
}