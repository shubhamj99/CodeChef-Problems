#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int digits = (int)log10(n);
	    int fd = (int)n/pow(10,digits);
	    cout<<fd+(n%10)<<endl;
	}
	return 0;
}
