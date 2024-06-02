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
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		ll n=s.size();
		ll dp[n][n];
		for(int i=0;i<n;++i){
			dp[i][i]=1;
		}
		for(int i=0;i<n-1;++i){
			if(s[i]==s[i+1]) dp[i][i+1]=2;
			else dp[i][i+1]=1;
		}
		for(int k=3;k<=n;++k){
			for(int i=0;i<n-k+1;++i){
				int j=i+k-1;
				if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1]+2;
				else{
					dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
				}
			}
		}
		cout<<n-dp[0][n-1]<<el;
	}
}
