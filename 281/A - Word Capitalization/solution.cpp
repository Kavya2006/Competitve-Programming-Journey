#include <iostream>
using namespace std;
 
int main() {
string t; cin>>t;
if(t[0] >= 'a' &&  t[0]<='z'){
t[0]= t[0]+'A'-'a';}
cout<<t;
return 0;
}