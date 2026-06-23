#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main (){
int t; cin>>t;
long long int a,b;
long long int x1,y1;
long long int x2,y2;
 
 
 
for(int i=0 ; i<t ; i++) {
cin>>a;cin>>b;
cin>>x1;cin>>y1;
cin>>x2;cin>>y2;
long long int x0[9]; long long y0[9]; long long int X0[9]; long long int Y0[9];
int count=0;
 
    x0[1] = x1 + a;  y0[1] = y1 + b;
    x0[2] = x1 + a;  y0[2] = y1 - b;
    x0[3] = x1 - a;  y0[3] = y1 + b;
    x0[4] = x1 - a;  y0[4] = y1 - b;
    x0[5] = x1 + b;  y0[5] = y1 + a;
    x0[6] = x1 - b;  y0[6] = y1 + a;
    x0[7] = x1 + b;  y0[7] = y1 - a;
    x0[8] = x1 - b;  y0[8] = y1 - a;
 
    X0[1] = x2 + a;  Y0[1] = y2 + b;
    X0[2] = x2 + a;  Y0[2] = y2 - b;
    X0[3] = x2 - a;  Y0[3] = y2 + b;
    X0[4] = x2 - a;  Y0[4] = y2 - b;
    X0[5] = x2 + b;  Y0[5] = y2 + a;
    X0[6] = x2 - b;  Y0[6] = y2 + a;
    X0[7] = x2 + b;  Y0[7] = y2 - a;
    X0[8] = x2 - b;  Y0[8] = y2 - a;
 
if(a != b){
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (x0[i] == X0[j] && y0[i] == Y0[j]) {
                count ++;
            }
        } 
    }
    cout<<count<<endl;
    
}
else if (a==b){
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (x0[i] == X0[j] && y0[i] == Y0[j]) {
                count ++;
            }
        } 
    }
   cout<<count/4<<endl;
 
}
    
}
 
    
    return 0;
}