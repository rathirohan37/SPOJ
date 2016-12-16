#include <iostream>
using namespace std;

int reverseIt(int a)
{
	int res=0,i=0;
	while(a!=0 && a%10==0)
		a/=10;
	while(a!=0)
	{
		int rem=a%10;
		res=res*10 + rem;
		i++;
		a/=10;
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int a,b,c,i;
		cin>>a>>b;
		a=reverseIt(a);
		b=reverseIt(b);
		c=a+b;
		c=reverseIt(c);
		cout<<c<<"\n";
	}
	return 0;
}
