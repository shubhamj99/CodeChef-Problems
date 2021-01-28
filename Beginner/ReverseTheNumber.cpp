#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int revnum = 0;
	    while(n>0){
	        revnum = (revnum*10) + (n%10);
	        n /= 10;
	    }
	    cout<<revnum<<endl;
	}
	return 0;
}
