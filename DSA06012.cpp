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
		ll n,k; cin>>n>>k;
		ll a[n+1];
		for(int i=1;i<=n;++i) cin>>a[i];
		sort(a+1,a+n+1);
		for(int i=n;i>=n-k+1;--i){
			cout<<a[i]<<" ";
		}
		cout<<el;
	}
}
