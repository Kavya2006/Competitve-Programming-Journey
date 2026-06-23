#include <bits/stdc++.h>
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
    long long int a,b,c;
    while(t--){
    cin>>a; cin>>b; cin>>c;
    if(a>b){
        cout<<"First"<<endl;
    }
    else if( a==b) {
        if (c%2 !=0) {
            cout<<"First"<<endl;
        }
        else cout<<"Second"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
 
 
    }
 
 
return 0;
}