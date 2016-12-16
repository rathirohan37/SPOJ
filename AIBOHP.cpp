#include <iostream>
#include <algorithm>
using namespace std;

int lcs( string x, string y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   reverse(y.begin(), y.end());
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (x.at(i-1) == y.at(j-1))
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   return L[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
         string x;
         cin>>x;

         cout<<x.length()-lcs(x,x,x.length(),x.length())<<"\n";
    }
}
