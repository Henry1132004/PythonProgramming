#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
    int t; cin>>t;
    while(t--){
    	ll n,sum; cin>>n>>sum;
    	ll a[n];
    	for(int i=0;i<n;++i){
    		cin>>a[i];
		}
		ll ans=0;
		sort(a,a+n);
		for(int i=0;i<n-1;++i){
			ll x=lower_bound(a+i+1,a+n,sum-a[i])-a;
			ll y=upper_bound(a+i+1,a+n,sum-a[i])-a;
			ans+=y-x;
		}
		cout<<ans<<el;
		
	}
}

