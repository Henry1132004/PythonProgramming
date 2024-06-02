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

ll perfectSum(ll a[], ll n, ll sum)
{
    ll dp[sum+1];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    // for(int i=0;i<=n;++i){
    //     dp[0][i]=1;
    // }
    for(int j=1;j<=sum;++j){
        for(int i=1;i<=n;++i){
            if(j>=a[i-1]) dp[j]=((dp[j]%mod)+(dp[j-a[i-1]]%mod))%mod;
        }
    }
    return dp[sum];
}


int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		cout<< perfectSum(a,n,k)<<el;
	}
}