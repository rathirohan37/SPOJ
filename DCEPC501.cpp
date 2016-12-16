#include <iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i;
        cin>>n;
        long long  a[n];
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long  T[n][3];
        for(i=0;i<n;i++)
        {
            T[i][0]=0;
            T[i][1]=0;
            T[i][2]=0;
        }
        T[n-1][0]=a[n-1];
        T[n-2][0]=a[n-2];
        T[n-2][1]=a[n-2]+a[n-1];
        for(i=n-3;i>=0;i--)
        {

                T[i][0]=max(T[i+2][0],max(T[i+2][1],T[i+2][2]))+a[i];
            if(i+4<n)
                T[i][1]=max(T[i+4][0],max(T[i+4][1],T[i+4][2]))+a[i]+a[i+1];
            else
                T[i][1]=a[i]+a[i+1];

            if(i+6<n)
                T[i][2]=max(T[i+6][0],max(T[i+6][1],T[i+6][2]))+a[i]+a[i+1]+a[i+2];
            else
                T[i][2]=a[i]+a[i+1]+a[i+2];
        }
        printf("%lld\n",max(T[0][0],max(T[0][1],T[0][2])));
    }
    return 0;
}
