#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		sort(a,a+n);
		int check=0;
		for(int i=0;i<n-1;++i){
			for(int j=i+1;j<n;++j){
				if(check) break;
				ll tmp=a[i]*a[i]+a[j]*a[j];
				ll tmp1=sqrt(tmp);
				if(tmp1*tmp1==tmp){
					if(binary_search(a,a+n,tmp1)){
						check=1;
						break;
					}
				}
			}
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
