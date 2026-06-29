// to find anything using keyword , use control+f
/* whenever integers very big , use long double ld
and suppose final answer is ans
// This prevents scientific notation and prints 0 decimal places
cout << fixed << setprecision(0) << ans << "
";
as long double can go upto 1e4000 something that is 10^4000
*/
 
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; // change value oF MOD here if u want something raise to power modulo k
#define F first
#define S second
const long long INF = 1e14;
 
// Types
using ll  = long long;
 
// ------------------------- Main Logic ------------------------- //
 
 
 
/*
suppose 33 = 3*11
// here we get 33,3,11 3 layers
// so like powers added+no of exponents-1
 
 
 
now let me do some good , suppose number is 360 , 2^3*(3^2)*5
 
// so in 360, last layer have all powers which is 360
// now 2nd layer , 2^3*(3^2,5,3*5) these three numbers , 
// now 3rd layer , 3^2(2^2,5,2*5) , 
// now 4th layer , 2^2(3,5,2)
// 5th layer       3*(2,3,5)
// 6th 7th,8th will have 2,3,5
// so answer is 8
 
// so basically we add total power+ no of exponents - 1
// idk how is this coming but its working iggg       
 
*/
 
 
const int MAXN = 1000000; // adjust as needed
vector<int> spf(MAXN + 1);
 
void compute_spf() {
    spf[1]=0; //1 is not prime;
    for (int i = 2 ; i <= MAXN; i++)
        spf[i] = i;
 
    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}
 
void Solve() {
    map<ll,ll>freq;
    ll x; cin>>x;
    set<ll>s;
    ll maxi=0;
    while(x>1){
        s.insert(spf[x]);
        freq[spf[x]]++;
        maxi=max(maxi,freq[spf[x]]);
        x=x/spf[x];
    }
    ll ans=0;
    
    for(auto &i : freq){
        ans+=i.S;
    }
    cout<<ans+ll(s.size())-1<<endl;
    
    
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
   compute_spf();
    ll t = 1; 
    cin >> t;
    while(t--) {
        Solve();
    }
 
    return 0;
}