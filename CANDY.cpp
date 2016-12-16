#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n!=-1)
	{
		int a[n];
		long i,ct=0,avg;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			ct+=a[i];
		}
		avg=(int)ct/n;
		if(ct%n==0)
			for(i=0,ct=0;i<n;i++)
			{
				if(a[i]<avg)
					ct+=avg-a[i];
			}
		else
			ct=-1;
		cout<<ct<<"\n";
		cin>>n;
	}
	return 0;
}
