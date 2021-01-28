#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int max = 0;
	int sum1 = 0;
	int sum2 = 0;
	int winner = 0;
	while(T--){
	    int x,y;
	    cin>>x>>y;
	    int l;
	    sum1 += x;
	    sum2 += y;
	    if(sum1 - sum2 > 0){
	        if(sum1 - sum2 > max){
	            l = sum1 - sum2;
	            max = l;
	            winner = 1;
	        }
	    }
	    else if(sum2 - sum1 > 0){
	        if(sum2 - sum1 > max){
	            l = sum2 - sum1;
	            max = l;
	            winner = 2;
	        }
	    }
	}
	cout<<winner<<" "<<max;
	return 0;
}
