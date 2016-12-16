#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
		long long k;
		cin>>k;
		if(k%2!=0)
		cout<<(500*(k/2)+192)<<"\n";
		else
		cout<<(500*(k/2-1)+442)<<"\n";
	}
	return 0;
}
