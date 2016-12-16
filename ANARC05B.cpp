#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int len1=t,len2,i,j;
        int a[len1];
        for(i=0;i<len1;i++)
            cin>>a[i];

        cin>>len2;

        int b[len2];
        for(i=0;i<len2;i++)
            cin>>b[i];

        vector<int> commons;
        long sum=0;
        for(i=0,j=0;i<len1 && j<len2;)
        {
            if(a[i]<b[j])
                i++;
            else if(a[i]==b[j])
            {
                commons.push_back(a[i]);
                sum+=a[i];
                i++;
                j++;
            }
            else
                j++;
        }

        int s1[commons.size()+1];
        for(i=0;i<=commons.size();i++)
            s1[i]=0;
        for(i=0,j=0;j<commons.size();i++)
        {
            if(a[i]!=commons[j])
            {
                s1[j]+=a[i];
            }
            else
            {
                j++;
            }
        }
        for(;i<len1;i++)
            s1[j]+=a[i];

        int s2[commons.size()+1];
        for(i=0;i<=commons.size();i++)
            s2[i]=0;
        for(i=0,j=0;j<commons.size();i++)
        {
            if( b[i]!=commons[j])
            {
                s2[j]+=b[i];
            }
            else
            {
                j++;
            }
        }
        for(;i<len2;i++)
            s2[j]+=b[i];


        for(i=0;i<=commons.size();i++)
        {
            if(s1[i]>s2[i])
                sum+=s1[i];
            else
                sum+=s2[i];
        }
        cout<<sum<<"\n";

        cin>>t;
    }
}
