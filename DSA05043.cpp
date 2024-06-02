#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back


int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		int res=1;
		int l=s.size();
		ll dp[l][l];
		for(int i=0;i<l;++i){
			dp[i][i]=1;
		}
		for(int i=0;i<l-1;++i){
			if(s[i]==s[i+1]){
				dp[i][i+1]=1;
				res=2;
			}
			else dp[i][i+1]=0;
		}
		for(int k=3;k<=l;++k){
			for(int i=0;i<l-k+1;++i){
				int j=i+k-1;
				if(dp[i+1][j-1]==1&&s[i]==s[j]){
					dp[i][j]=1;
					res=max(res,k);
				}
				else dp[i][j]=0;
			}
		}
		cout<<res<<el;
	}
}