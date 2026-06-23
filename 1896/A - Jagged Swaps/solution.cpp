#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
int t; cin>>t;
int n;
for(int i=0 ; i<t ; i++) {
cin>>n;
vector<int>a(n);
int mini=10;
int minim;
for(int j=0 ; j<n ; j++) {
    cin>>a[j];
    minim = min(mini , a[j]);
    mini=minim;
}
if (mini==a[0]) {
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}
 
 
 
 
 
    return 0;
}