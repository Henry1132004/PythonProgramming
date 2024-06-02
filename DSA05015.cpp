#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


ll dp[1001][1001];
int main(){
	dp[0][0]=1; dp[1][0]=1; dp[1][1]=1;
	ll p=1;
	for(int i=1;i<=1000;++i){
		for(int j=0;j<=i;++j){
			if(j==0) dp[i][j]=1;
			else if(j==i){
				p=((p%mod)*(i%mod))%mod;
				dp[i][j]=p;
			}
			else{
				dp[i][j]=((dp[i-1][j]%mod)+(((dp[i-1][j-1]%mod)*(j%mod))%mod))%mod;
			}
		}
	}
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		cout<<dp[n][k]<<el;
	}
}
