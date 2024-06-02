#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll a[1001][1001];

int main(){
	ll n; cin>>n; cin.ignore();
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			a[i][j]=0;
		}
	}
//	ll n; cin>>n; cin.ignore();
	for(int i=1;i<=n;++i){
		string s; getline(cin,s);
		stringstream ss(s);
		string w;
		vector<string> tmp;
		while(ss>>w){
			tmp.pb(w);
		}
		
		for(int j=0;j<tmp.size();++j){
			ll x=stoll(tmp[j]);
			a[i][x]=a[x][i]=1;
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cout<<a[i][j]<<" ";
		}
		cout<<el;
	}
}

