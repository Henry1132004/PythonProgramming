#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	ll n; cin>>n;
	ll a[n+1][n+1];
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>a[i][j];
		}
    }
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(a[i][j]) cout<<j<<" ";
		}
		cout<<el;
	}
}

