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

ll findlen(ll a[],ll n,ll m){
	ll dp[n+1][m];
	for(int i=0;i<m;++i){
		if(i==0) dp[n][i]=0;
		else dp[n][i]=-1;
	}
	for(int i=n-1;i>=0;--i){
		for(int j=0;j<m;++j){
			ll l=dp[i+1][j];
			ll r=dp[i+1][(j+a[i])%m];
			dp[i][j]=l;
			if(r!=-1){
				dp[i][j]=max(dp[i][j],r+1);
			}
		}
	}
	return dp[0][0];
	
}

int main(){
	fast();
	int t; cin>>t; 
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		cout<<findlen(a,n,k)<<el;
	}
}
