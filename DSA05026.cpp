#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;




int main(){
	ll c,n; cin>>c>>n;
	ll a[n+1];
	for(int i=1;i<=n;++i) cin>>a[i];
	ll dp[n+1][c+1];
	for(int i=0;i<=n;++i){
		for(int j=0;j<=c;++j){
			if(i==0||j==0) dp[i][j]=0;
			else{
				dp[i][j]=dp[i-1][j];
				if(j>=a[i]){
					dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+a[i]);
				}
			}
		}
	}
	
	cout<<dp[n][c];
}

