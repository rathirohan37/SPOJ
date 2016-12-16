#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        int n,k,r=0,i,j;
        scanf("%d %d",&n,&k);
        int packets[k];
        for(i=0;i<k;i++)
        {
            scanf("%d",&packets[i]);
            if(packets[i]!=-1)
                r++;
        }
        int avail[r];
        int cost[r];
        int T[k+1];
        T[0]=0;
        for(i=0,j=0;i<k;i++)
        {
            if(packets[i]!=-1)
            {
                avail[j]=i+1;
                cost[j++]=packets[i];
            }
        }
        for(i=1;i<=k;i++)
            T[i]=-1;
        for(j=0;j<r;j++)
        {
            for(i=1;i<=k;i++)
            {
                if(i>=avail[j] && T[i]!=-1 && T[i-avail[j]]!=-1)
                    T[i]=min(T[i],cost[j]+T[i-avail[j]]);
                else if(i>=avail[j] && T[i-avail[j]]!=-1)
                    T[i]=cost[j]+T[i-avail[j]];
            }
        }
        printf("%d\n",T[k]);
    }
    return 0;
}
