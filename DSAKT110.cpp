#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll gtln(ll a[],ll n,vector<ll>& dp){
	if(n<0) return 0;
	if(n==0) return a[0];
	if(dp[n]!=-1){
		return dp[n];
	}
	ll pick=a[n]+gtln(a,n-2,dp);
	ll notpick=gtln(a,n-1,dp);
	return dp[n]=max(pick,notpick);
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		vector<ll> dp(n,-1);
		cout<<gtln(a,n-1,dp)<<el;
	}
}

