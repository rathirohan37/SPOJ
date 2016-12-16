#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int a;
		long ans=0;
		cin>>a;
		while(a!=0)
		{
			a/=5;
			ans+=(long)a;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
