#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
      ll n; cin>>n;
      string s; cin>>s;
      ll ans=0;
      for(ll i=1; i<n; i++){
            if(s[i]==s[i-1]){
                  ans++;
            }
      }
      cout<<ans<<endl;
}