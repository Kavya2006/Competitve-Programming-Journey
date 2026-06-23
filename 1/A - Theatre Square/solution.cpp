#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n,m,a;
	cin>>n;cin>>m;cin>>a;
	long long answer1;
	long long answer2;
	if(n%a ==0 ){
	    answer1 = n/a;
	}
	else {
	    answer1=n/a+1 ;
	}
    if(m%a ==0 ){
	    answer2 = m/a;
	}
	else {
	    answer2=m/a+1 ;
	}
	cout<<answer1*answer2;
	return 0;
	
 
}