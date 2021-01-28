#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    if(n<=2){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<n/2 + 1<<endl;
	    }
	}
	return 0;
}
