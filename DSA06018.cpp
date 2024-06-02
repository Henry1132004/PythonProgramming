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
		ll n; cin>>n;
		ll a[n+1];
		for(int i=1;i<=n;++i) cin>>a[i];
		sort(a+1,a+n+1);
		ll dem=0;
		for(int i=1;i<=n-1;++i){
			if(a[i+1]-a[i]>=2){
				dem+=a[i+1]-a[i]-1;
			}
		}
		cout<<dem<<el;
	}
}
