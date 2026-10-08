#include <bits/stdc++.h>
using namespace std;
using ll= long long;
#define endl '
'
const ll MAXN=ll(1e7)+5LL;
ll gcd( ll a , ll b){
      if(b==0){
            return a;
      }
      return gcd(b,a%b);
}
void solve(){
      ll n; cin>>n;
      vector<ll>spf(MAXN,1);
      for(ll i=2; i<MAXN; i++){
            spf[i]=i;
      }
      for(ll i=2; i*i<MAXN; i++){
            if(spf[i]==i){
                  for(ll j=i*i; j<MAXN; j+=i){
                        if(spf[j]==j){
                              spf[j]=i;
                        }
                  }
            }
      }
      vector<ll>a(n);
      vector<pair<ll,ll>>ans(n,{-1,-1});
      ll op=0;
      for(auto &i : a){
            cin>>i;
            ll curr=i;
            set<ll>s;
            while(curr>1){
               s.insert(spf[curr]);
               curr=curr/spf[curr];
               
            }
            ll k= (*s.begin());
            if(k==2){
                  for (auto &j : s){
                        if(gcd(j+k,i)==1){
                              ans[op]={2,j};
                              break;
                        }
                  }
                ll opp=i;
                ll kk=1;
                while(opp%2==0){
                 opp=opp/2;
                 kk=kk*2;
                }
                if(opp>1){
                   if(gcd(opp+kk,i)==1){ans[op]={opp,kk};}
                }
                
             
             
            }
            else{
                  if(s.size()>=2){
                        auto it=s.begin();
                        ll gg=(*it);
                        it++;
                        ll ggg=(*it);
                        ans[op]={gg,ggg};
                  }
            }
            
            op++;
      }
      for(ll i=0; i<n ; i++){
            cout<<ans[i].first<<" ";
      }
 cout<<endl;
     for(ll i=0; i<n ; i++){
            cout<<ans[i].second<<" ";
      }
      cout<<endl;
      
      
}
int main(){
      solve();
}