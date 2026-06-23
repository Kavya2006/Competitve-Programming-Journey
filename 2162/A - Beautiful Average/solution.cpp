#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
int t;
cin>>t;
int n;
for(int i=0; i<t ; i++){
   cin>>n;
   int a[n];
   int maxi=0;
   for(int j=0; j<n ; j++){
       cin>>a[j];
      int maximum=max(a[j],maxi);
       maxi=maximum;
       
   }
   cout<<maxi<<endl;
}
 
return 0;
}