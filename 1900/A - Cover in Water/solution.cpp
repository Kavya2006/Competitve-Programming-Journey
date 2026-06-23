#include <bits/stdc++.h>
#include <numeric>
using namespace std;
 
// Types
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
 
// Shortcuts
#define pb      push_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
 
// Common containers
using vi  = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vpi = vector<pii>;
 
 
 
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    int n,k;
    string s;
    while(t--){
    cin>>n;
    vector<char>a(n);
    int count=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if (a[i]=='.'){
            count++;
        }
    }
    bool ThreeDots = false;
     for(int i=1 ; i<n-1 ; i++){
      if(a[i] == '.' && a[i-1]=='.' && a[i+1] =='.'   ){
        ThreeDots=true;
        break;
      }
     }
        if(ThreeDots){
            cout<<"2"<<endl;
        }
        else cout<<count<<endl;
    }
 
    return 0;
}