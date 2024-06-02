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


int main(){
//	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		ll tong[n+1];
		ll sum=0;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			sum+=a[i];
			tong[i]=sum;
		}
		int check=0;
		for(int i=2;i<=n-1;++i){
			if(tong[i-1]==tong[n]-tong[i]){
				cout<<i<<el;
				check=1;
				break;
			}
		}
		if(check==0) cout<<"-1\n";
		
	}
}
