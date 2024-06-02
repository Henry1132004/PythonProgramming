#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;




int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		vector<ll> lis(n,1);
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[i]>=a[j]){
					lis[i]=max(lis[i],lis[j]+1);
				}
			}
		}
		ll M=-1e9-7;
		for(int i=0;i<n;++i){
			M=max(M,lis[i]);
		}
		cout<<n-M<<el;
		
	}
}

