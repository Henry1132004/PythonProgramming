#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int main(){
//	fast();
	int t; cin>>t; cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		ll n=s1.size(),m=s2.size();
		ll dp[n+1][m+1];
		for(int i=0;i<=n;++i){
			for(int j=0;j<=m;++j){
				if(i==0||j==0) dp[i][j]=0;
				else{
					if(s1[i-1]==s2[j-1]){
						dp[i][j]=dp[i-1][j-1]+1;
					}
					else{
						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
					}
				}
			}
		}
		cout<<dp[n][m]<<el; 
	}
}
