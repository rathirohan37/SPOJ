#include <iostream>
using namespace std;

int r;
int w;
int main() {
	int t;
	cin>>t;
	while(t-->0)
    {
        int i,j;
        cin>>r>>w;
        int A[r][w+2],B[r][w];
        for(i=0;i<r;i++)
        {
            for(j=0;j<w;j++)
                cin>>B[i][j];
        }
        for(i=0;i<r;i++)
        {
            A[i][0]=0;
            A[i][w+1]=0;
        }
        for(j=1;j<w+1;j++)
            A[r-1][j]=B[r-1][j-1];


        for(i=r-2;i>=0;i--)
        {
            for(j=1;j<w+1;j++)
            {
                A[i][j]=max(A[i+1][j-1],max(A[i+1][j],A[i+1][j+1])) + B[i][j-1];
            }
        }
        int maxi=0;
        for(i=1;i<w+1;i++)
            maxi=max(A[0][i],maxi);
        cout<<maxi<<"\n";
    }
	return 0;
}
