#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int n;
    int arr1[t];
    long int arr2[8*t];
    for(int i=0 ; i<t ; i++) {
      cin>>arr1[i];
      for( int j=0 ; j<arr1[i] ; j++) {
        cin>>arr2[8*i + j];
      }
 
    }
    int count ;
    int negative;
    int drum;
    for(int i=0 ; i<t ; i++) {
      int count = 0 ;
      int negative = 0;
      int drum =0;
      for(int j=0 ; j<arr1[i] ; j++) {
       if (arr2[8*i + j]==0 ) {
        count++;
       } 
       else if (arr2[8*i+j] ==-1) {
        negative++;
       }
      }
       if (negative%2 !=0 ) {
       
         drum = count + 2;
       }
       else {
        drum = count;
       }
 
      cout<<drum<<endl;
    }
 
 
 
 
    return 0;
}