// to find anything using keyword , use control+f
 
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
 
 
// ---------------------------------------------------------
// Check if string 's' is a substring of string 'x'
bool isSub(const string &x, const string &s) {
    return x.find(s) != string::npos;  
    
}
 
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    int n,m;
    
    while(t--){
    cin>>n>>m;
    string x;
    string s;
     cin>>x;
     cin>>s;
     int count =0;
     bool IsPresent=false;
     for(int i=0 ; i<6 ; i++){
        if(isSub(x,s)){
            IsPresent=true;
            break;
        }
        else{
            x=x+x;
            count++;
        }
     }
     if (IsPresent){
        cout<<count<<endl;
     }
     else cout<<"-1"<<endl;
 
 
 
    }
 
    return 0;
}