#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")
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
		ll n,k; cin>>n>>k;
		vector<ll> dp(n+1,0);
		for(int i=1;i<=n;++i){
			for(int j=1;j<=k;++j){
				if(i==j){
					dp[i]++;
					dp[i]=dp[i]%mod;
				}
				else if(i>j){
					dp[i]=((dp[i]%mod)+(dp[i-j]%mod))%mod;
				}
			}
		}
		cout<<dp[n]<<el;
	}
}