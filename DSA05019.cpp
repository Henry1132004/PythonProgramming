#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
int mod=1e9+7;


void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
} 


int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n,m; cin>>n>>m;
		ll a[n+1][m+1];
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				cin>>a[i][j];
			}
		}
		ll dp[n+1][m+1];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(a[i][j]){
					dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
				}
			}
		}
		ll ans=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				ans=max(ans,dp[i][j]);
			}
		}
		cout<<ans<<el;
	}
}
