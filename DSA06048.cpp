#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

struct so{
	ll gt,dau;
};

bool cmp(so a,so b){
	return a.gt<b.gt;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		int pos=0;
		for(int i=1;i<=n-1;++i){
			if(a[i+1]<a[i]){
				pos=i;
				break;
			}
		}
		cout<<pos<<el;
		
	}
}

