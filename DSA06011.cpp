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
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		ll tmp=1e18; ll res;
		for(int i=0;i<n;++i){
		    for(int j=i+1;j<n;++j){
		        ll d=a[j]+a[i];
		        if(abs(d)<tmp){
		            tmp=abs(d);
		            res=d;
		        }
		        
		    }
		}
		cout<<res<<el;
	}
}