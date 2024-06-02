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
		ll a[n+1],b[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		int l=1,r=n;
		for(int i=1;i<=n;++i){
			if(a[i]!=b[i]){
				break;
			}
			else l++; 
		}
		for(int i=n;i>=1;--i){
			if(a[i]!=b[i]){
				break;
			}
			else r--; 
		}
		cout<<l<<" "<<r<<el;
	}
}

