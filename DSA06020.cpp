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
		ll n,x; cin>>n>>x;
		ll a[n+1];
		int check=0;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			if(a[i]==x) check=1; 
		}
		if(check) cout<<"1\n";
		else cout<<"-1\n";
	}
}
