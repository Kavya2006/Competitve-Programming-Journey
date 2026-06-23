#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    int n,x;
   
    
    for(int i=0 ; i<t ; i++) {
       cin>>n;cin>>x;
       vector<int>a(n);
     
     for(int j=0 ; j<n ; j++){
        cin>>a[j];
 
     }
     int maxi=a[0];// outside j loop so this value doesnt get reset to a[0] again and again
     int Maximumm;
     for(int j=0 ; j<n-1 ; j++){
         
         Maximumm = max(maxi, a[j+1]-a[j]   );
         maxi=Maximumm;
     }
     cout<<max(maxi, 2*(x-a[n-1]))<<endl;
     
     }
 
 
    
 
    return 0;
}