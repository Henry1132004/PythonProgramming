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


ll solve(ll n,ll s){
	if(9*n<s) return -1;
    if(n>0&&s==0) return -1;
    if(n==1) return 1;
    ll dp[s+1][10];
    memset(dp,0,sizeof dp);
    for(int i=1;i<=9&&i<=s;++i){
        dp[i][i]=1;
    }
    for(int i=2;i<=n;++i){
        for(int j=s;j>=1;--j){
            for(int k=9;k>=1;--k){
                ll x=j-k;
                if(x>0){
                    ll tmp=0;
                    for(int l=0;l<10;++l){
                        tmp=((tmp%mod)+(dp[x][l]%mod))%mod;
                    }
                    dp[j][k]=((dp[j][k]%mod)+tmp)%mod;
                }
            }
        }
    }
    ll sum=0;
    for(int i=0;i<10;++i) sum=((sum%mod)+(dp[s][i]%mod))%mod;
    return sum;
}


int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n,s; cin>>n>>s;
		cout<<solve(n,s)<<el;
	}
}
