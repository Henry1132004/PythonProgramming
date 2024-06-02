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
// 	fast();
	int t; cin>>t; cin.ignore();
	while(t--){
		string s1; getline(cin,s1);
		string s2=s1;
		reverse(all(s2));
		ll n=s1.size();
		ll dp[n+1][n+1];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				if(s1[i-1]==s2[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<n-dp[n][n]<<el;
	}
}