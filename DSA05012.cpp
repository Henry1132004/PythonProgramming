#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int main(){
	ll dp[1001][1001];
	dp[0][0]=1; dp[1][0]=1; dp[1][1]=1;
	for(int i=2;i<=1000;++i){
		for(int j=0;j<=i;++j){
			if(j==0||j==i) dp[i][j]=1;
			else{
				dp[i][j]=((dp[i-1][j]%mod)+(dp[i-1][j-1]%mod))%mod;
			}
		}
	}
//	fast();
	int t; cin>>t; 
	while(t--){
		ll n,k; cin>>n>>k;
		cout<<dp[n][k]<<el;
	}
}

