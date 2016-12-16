#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,count=0,f=0;
        vector<int> a;
        a.push_back(0);
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='K')
            {
                f=1;
                break;
            }
        }
        if(f==1)
            for(i=i+1;i<s.length();i++)
            {
                if(s[i]=='K')
                {
                    a.push_back(count);
                    count=0;
                }
                else if(s[i]=='E')
                {
                    count++;
                }
            }
        int T[a.size()];
        long long ans=0;
        T[0]=0;
        for(i=1;i<a.size();i++)
        {
            T[i]=a[i]*i+T[i-1];
            ans+=T[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
