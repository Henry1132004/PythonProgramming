#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl
int mod=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}


int main(){
    // fast();
    int t; cin>>t;
    while(t--){
    	ll n,s; cin>>n>>s;
    	ll w[n+1],v[n+1];
    	ll dp[n+1][s+1];
    	for(int i=1;i<=n;++i) cin>>w[i];
    	for(int i=1;i<=n;++i) cin>>v[i];
    	for(int i=0;i<=n;++i){
    		for(int j=0;j<=s;++j){
    			if(i==0||j==0) dp[i][j]=0;
    			else{
    				dp[i][j]=dp[i-1][j];
    				if(j>=w[i]){
    					dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
					}
				}
			}
		}
		cout<<dp[n][s]<<el;
	}
}

