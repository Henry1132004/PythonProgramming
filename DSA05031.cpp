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
		ll n; cin>>n;
		ll dp[n+1];
		memset(dp,1000000,sizeof(dp));
		dp[0]=0; dp[1]=1;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=sqrt(i);++j){
				dp[i]=min(dp[i],dp[i-j*j]+1);
			}
		}
		cout<<dp[n]<<el;
	}
}
