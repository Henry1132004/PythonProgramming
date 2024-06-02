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
		// for(int i=0;i<=n;++i){
		// 	dp[i][0]=0;
		// }
		// for(int j=0;j<=m;++j){
		// 	dp[0][j]=0;
		// }
		dp[1][1]=a[1][1];
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				ll mx=1e9+7;
				if(i==1&&j!=1){
					dp[i][j]=a[i][j]+dp[i][j-1];
				}
				else if(i!=1&&j==1){
					dp[i][j]=a[i][j]+dp[i-1][j];
				}
				else if(i==1&&j==1){

				}
				else{
					ll mx=min(dp[i][j-1],dp[i-1][j]);
					mx=min(mx,dp[i-1][j-1]);
					dp[i][j]=a[i][j]+mx;
				}
			}
		}
		cout<<dp[n][m]<<el;
	}
	
	
}