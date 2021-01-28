#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int menu[]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
	while(T--){
	    int p;
	    cin>>p;
	    int count = p/2048;
	    int rem = p%2048;
	    while(rem){
	        count += rem%2;
	        rem /= 2;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
