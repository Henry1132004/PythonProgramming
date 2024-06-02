#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define N 18
int mod=1e9+7;

ll n;
ll c[N][N];
ll dp[1<<N][N];

void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll solve(ll mask,ll u){
	if(dp[mask][u]!=-1) return dp[mask][u];
	if(mask==(1<<n)-1) return 0;
	ll ans=1e18+7;
	for(int v=0;v<n;++v){
		if(mask&(1<<v)) continue;
		else{
			ll new_mask=mask|(1<<v);
			ans=min(ans,solve(new_mask,v)+c[u][v]);
		}
	}
	return dp[mask][u]=ans;
}



int main(){
// 	fast();
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin>>c[i][j];
			}
		}
		ll ans=1e18+7;
		for(int u=0;u<n;++u){
			memset(dp,-1,sizeof dp);
			ll tmp=solve(1<<u,u);
			ans=min(ans,tmp);
		}
		cout<<ans<<el;
	}
}