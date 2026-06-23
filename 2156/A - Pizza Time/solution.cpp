#include <iostream>
using namespace std;
int main (){
int t; cin>>t;
int n;
for(int i=0 ;i<t; i++){
 int sum=0; 
 cin>>n;
 while(n>2){
 sum = sum + n/3;
 n=n-n/3-n/3;
 }
 cout<<sum<<endl;
}
    
    
    return 0;
}