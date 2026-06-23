#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
int t; cin>>t;
int n;
for(int i=0 ; i<t ; i++) {
cin>>n;
vector< long int>a(n);
int sum1=0;
int sum2=0;
int k=-1;
for(int j=0 ; j<n ; j++) {
    cin>>a[j];
    
    if (a[j]==a[0]){
        sum1++;
    }
     else if(k==-1) {
        k=a[j];
        sum2++;
    }
    else if(a[j] == k) {            
    sum2++;            
}
    else {
        sum1=-1000;
        sum2=-199;
        continue;
    }
    
    
    }
    if (( sum1 == sum2) || (sum1+1 == sum2) || (sum1-1 == sum2) || sum2==0  ) {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
    
    return 0;
}