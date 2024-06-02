#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll Max(ll a[],ll n){
	if(n==1){
		return a[0];
	}
	ll dp[n][2];
	dp[0][1]=a[0];
	dp[0][0]=0;	
	for(int i=1;i<n;++i){
		dp[i][1]=dp[i-1][0]+a[i];
		dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
	}
	return max(dp[n-1][0],dp[n-1][1]);
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		cout<<Max(a,n)<<el;
	}
}

