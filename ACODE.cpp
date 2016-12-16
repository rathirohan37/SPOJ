#include<bits/stdc++.h>
using namespace std;
#define rep(p,q,r) for(int p=q;p<r;p++)
int main()
{
	string s;
	cin>>s;
	while(s!="0")
	{
		long long dp[5043];
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		rep(i,0,s.length())
		{
			if(i==0)
				dp[i+1]=dp[i];
			else
			{
				if(s[i]!='0')
				dp[i+1]=dp[i];
				int x=(s[i-1]-48)*10+(s[i]-48);
				if(x<=26&&x>0&&s[i-1]>48)
					dp[i+1]+=dp[i-1];
			}


		}
		cout<<dp[s.length()]<<"\n";
		cin>>s;

	}
}


