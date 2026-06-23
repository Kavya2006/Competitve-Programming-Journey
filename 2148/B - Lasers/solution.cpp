#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int arr1[t];
    int arr2[t];
    long int x,y;
    for(int i=0 ; i<t ; i++) {
    cin>>arr1[i]; 
    cin>>arr2[i];
    cin>>x>>y;
    for(int j=0 ; j<arr1[i] ; j++) {
        long long int temp; cin>>temp;
    }
    for(int j=0 ; j<arr2[i] ; j++) {
        long long int temp ; cin>>temp;
    }
 
    }
for(int i=0 ; i<t ; i++) {
    cout<<arr1[i] + arr2[i] <<endl;
}
 
 
    return 0;
}