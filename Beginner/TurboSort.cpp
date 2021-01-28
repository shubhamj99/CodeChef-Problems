#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A[1000001]={};
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    ++A[n];
	}
	for(int i=0;i<1000001;++i){
	    while(A[i]--){
	        cout<<i<<endl;
	    }
	}
	return 0;
}
