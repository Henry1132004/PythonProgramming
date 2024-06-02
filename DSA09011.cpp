#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;
ll dx[8]={-1,-1,-1,0,0,1,1,1};
ll dy[8]={-1,0,1,-1,1,-1,0,1};


ll a[1001][1001],n,m,visited[1001][1001];

void dfs(ll i,ll j){
	visited[i][j]=true;
	for(int k=0;k<8;++k){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]==1&&visited[i1][j1]==false){
			dfs(i1,j1);
		}
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		ll cnt=0;
		memset(visited,false,sizeof(visited));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(a[i][j]==1&&visited[i][j]==false){
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout<<cnt<<el;
	}
}

