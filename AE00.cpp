#include <cmath>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int i=1,c=ceil(n/i)-(i-1),ct=0;
	while(c>0)
	{
		ct+=c;
		i++;
		c=ceil(n/i)-(i-1);
	}
	cout<<ct;
	return 0;
}
