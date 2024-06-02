#include<bits/stdc++.h>
using namespace std;
int test;
int n;
int main()
{
    cin>>test;
    while(test--)
    {
        cin>>n;
        int a[n+1];
        int d1[n+1],d2[n+1];
        memset(d1,-1,sizeof(d1));
        memset(d2,-1,sizeof(d2));
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[j]>a[i])
                {
                    d1[i]=j;
                    break;
                }
            }
            for(int j=i+1;j<=n;j++)
            {
                if(a[j]<a[i])
                {
                    d2[i]=j;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(d1[i]!=-1)
            {
                if(d2[d1[i]]!=-1)
                {
                    cout<<a[d2[d1[i]]]<<" ";
                }
                else cout<<-1<<" ";
            }
            else cout<<d1[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}