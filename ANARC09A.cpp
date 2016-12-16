#include<iostream>
 #include <cmath>
using namespace std;
int main()
{
    int t=1;
    string s;
    cin>>s;
    while(s.at(0)!='-')
    {
        int n=0,l=0,r=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='}' && l==0)
                r++;
            else if(s.at(i)=='}')
                l--;
            else
                l++;
        }
        n=ceil((float)l/2)+ceil((float)r/2);
        cout<<t<<". "<<n<<"\n";
        t++;
        cin>>s;
    }
    return 0;
}
