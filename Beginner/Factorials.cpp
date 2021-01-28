#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int fact[200];
	    int rem = 0, digits = 1;
	    fact[0] = 1;
	    while(n>=1){
	        for(int j = 0;j < digits;j++){
	            fact[j] = fact[j]*n+rem;
	            rem = fact[j]/10;
	            fact[j] %= 10;
	        }
	        while(rem){
	            fact[digits++] = rem%10;
	            rem/=10;
	        }
	        n--;
	    }
	    for(digits--;digits>=0;digits--){
	        cout<<fact[digits];
	    }
	    cout<<endl;
	}
	return 0;
}
