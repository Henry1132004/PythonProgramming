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
		string s1,s2;
		cin>>s1>>s2;
		ll n=s1.size();
		ll m=s2.size();
		ll dp[n+1][m+1];
		for(int i=0;i<=n;++i){
			dp[i][0]=i;
		}
		for(int j=0;j<=m;++j){
			dp[0][j]=j;
		}
		s1="@"+s1;
		s2="@"+s2;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(s1[i]==s2[j]) dp[i][j]=dp[i-1][j-1];
				else{
					dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
				}
			}
		}
		cout<<dp[n][m]<<el;
	}
}
