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
//	fast();
	int t; cin>>t;
	while(t--){
		ll n,s; cin>>n>>s;
		ll a[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		ll dp[s+1]={0};
		dp[0]=1;
		for(int i=1;i<=n;++i){
			for(int j=s;j>=a[i];--j){
				if(dp[j-a[i]]) dp[j]=1;
			}
		}
		if(dp[s]) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
