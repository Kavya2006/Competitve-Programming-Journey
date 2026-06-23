#include <iostream> 
using namespace std;
int main (){
int t;
cin>>t;
int ArrX[t];
int ArrN[t];
for(int i=0 ; i<t ; i++) {
cin>>ArrX[i];
cin>>ArrN[i];
}
for(int i =0 ; i<t ; i++){
if (ArrN[i]%2 ==0) {
    cout<<0<<endl;}
else cout<<ArrX[i]<<endl;
}
 
    return 0;
}