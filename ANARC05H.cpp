#include<iostream>

using namespace std;

string s;
int len;
int count1(int max_sum,int pos)
{
    if(pos==len)
        return 1;
    int i,sum=0,count=0;
    for(i=pos;i<len;i++)
    {
        sum+=(s[i]-48);
        if(max_sum<=sum)
            count+=count1(sum,1+i);
    }
    return count;
}

int main()
{
    cin>>s;
    int t=1;
    while(s!="bye")
    {
        len=s.length();
        cout<<t++<<". "<<count1(0,0)<<"\n";
        cin>>s;
    }
    return 0;
}
