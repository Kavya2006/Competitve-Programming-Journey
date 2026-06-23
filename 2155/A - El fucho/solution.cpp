#include <iostream>
using namespace std;
int main (){
int t; cin>>t;
int n[100];
for(int i=0 ; i<t ; i++) {
    cin>>n[i];
}
for(int i=0 ; i<t ; i++) {
    cout<<(n[i]-1+n[i]-2 + 1);
    cout<<endl;
}
 
 
 
 
 
 
    return 0;
}