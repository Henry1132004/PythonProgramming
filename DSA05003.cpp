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
	int t; cin>>t; 
	while(t--){
		ll l1,l2,l3; cin>>l1>>l2>>l3;
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		ll dp[l1+1][l2+1][l3+1];
		for(int i=0;i<=l1;++i){
			for(int j=0;j<=l2;++j){
				for(int k=0;k<=l3;++k){
					if(i==0||j==0||k==0) dp[i][j][k]=0;
					else{
						if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]){
							dp[i][j][k]=dp[i-1][j-1][k-1]+1;
						}
						else{
							dp[i][j][k]=max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
						}
					}
				}
			}
		}
		cout<<dp[l1][l2][l3]<<el; 
	}
}

