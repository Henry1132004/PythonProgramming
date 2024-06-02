#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl
int mod=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

bool cmp(ll a,ll b){
	return a>b;
}

int main(){
//	fast();
	int t; cin>>t;
	while(t--){
		ll n,m; cin>>n>>m;
		ll a[n+m];
		for(int i=0;i<n+m;++i) cin>>a[i];
		sort(a,a+n+m);
		for(int i=0;i<n+m;++i){
			cout<<a[i]<<" ";
		}
		cout<<el;
	}
}
