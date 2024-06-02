#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for (ll i=0;i<n;++i) cin>>a[i];
        sort(a,a+n);
        ll left=0,right=1;
        ll count=0;
        while (right<n)
        {
            if(a[right]-a[left]< k)
            {
                count+=(right-left);
                right++;
            }
            else
            {
                left++;
                if(left==right)right++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}