#include<bits/stdc++.h>


using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int m,n,i,j;
		cin>>m>>n;
		int l=fmin((m-1),sqrt(n));
		int primes[n-m+1];
		for(i=0;i<=n-m;i++)
            primes[i]=1;
	    if(m==0)
            primes[0]=primes[1]=0;
	    if(m==1)
            primes[0]=0;
	    for(i=2;i<=l;i++)
	    {
	        for(j=ceil(m/i);i*j<=n;j++){
                    primes[i*j-m]=0;
	        }
	    }
	    if(sqrt(n)>(m-1))
            for(i=m;i<=sqrt(n);i++)
            {
                if(primes[i-m]==1)
                for(j=2;i*j<=n;j++)
                    primes[i*j-m]=0;
            }
	    for(i=0;i<=n-m;i++)
            if(primes[i]==1)
               cout<<i+m<<"\n";

        cout<<"\n";
	}
}


