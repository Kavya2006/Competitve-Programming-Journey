#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
#define pb push_back
 
/*
2 , 2, 2
 
*/
 
void solve() {
    ll b,c,d; cin>>b>>c>>d;
    bitset<64>bb(b);
    bitset<64>cc(c);
    bitset<64>dd(d);
    ll a=0;
    for(ll i=0; i<64; i++){
        if(dd[i]==1){
            if(cc[i]==1){
                if(bb[i]!=1){
                cout<<-1<<endl;
                return;
                }
                else{
                    a=a+0;
                }
            }
            else{
                a=a+(1LL<<i);
            }
        }
        else{
            if(cc[i]!=1){
                if(bb[i]==1){
                  cout<<-1<<endl;
                return;
                }
            }
            else{
                a=a+(1LL<<i);
            }
        }
    }
    cout<<a<<endl;
    return;
}
 
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t = 1;
	cin >> t;
	while (t--) {
	    solve();
	}
    
    return 0;
}