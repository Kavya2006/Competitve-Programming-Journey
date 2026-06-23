#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
 
    long int t;
    cin >> t;
 
    long long int n[t];
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
 
    for (int i = 0; i < t; i++) {
 
        int k = n[i];      
        int mini = 10;     
 
        while (k > 0) {
            int Minimums = min(mini, k % 10);
            mini = Minimums;
            k = k / 10;
        }
 
        cout<<mini<<endl;   
    }
 
    return 0;
}