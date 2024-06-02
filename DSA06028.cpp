#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	ll n; cin>>n;
	vector<ll> v(n);
	for(int i=0;i<n;++i) cin>>v[i];
	vector<vector<ll>> ans;
	for(int i=0;i<n-1;++i){
		int tmp=i;
		for(int j=i+1;j<n;++j){
			if(v[j]<v[tmp]) tmp=j;
 		}
 		swap(v[i],v[tmp]);
//		if(check&&ans.size()!=0) break;
		ans.pb(v);
			
	}
	for(int i=ans.size()-1;i>=0;--i){
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<ans[i].size();++j){
			cout<<ans[i][j]<<" ";
		}
		cout<<el;
	}
}
