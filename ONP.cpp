#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0)
    {
        stack <string> s1;
        stack <string> s2;
        s1.push("");
        s2.push("");
        char s[401];
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            string x="";
            x+=s[i];
            if(s[i]>='a' && s[i]<='z')
                s2.push(x);
            else if(s[i]=='+' ||s[i]=='-' ||s[i]=='*' ||s[i]=='/' ||s[i]=='^' )
                s1.push(x);
            else if(s[i]==')')
            {
                string b=s2.top();
                s2.pop();
                string a=s2.top();
                s2.pop();
                string op =s1.top();
                s1.pop();
                string res=a+b+op;
                s2.push(res);
            }
        }
        cout<<s2.top()<<"\n";
    }
	return 0;
}
