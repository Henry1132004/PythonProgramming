#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;




int main(){
	int t; cin>>t;
	ll dp[51];
	dp[1]=1; dp[2]=2,dp[3]=4;
	for(int i=4;i<=50;++i){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	while(t--){
		ll n; cin>>n;
		cout<<dp[n]<<el;
		
	}
}

