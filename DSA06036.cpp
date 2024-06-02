#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
    int t; cin>>t;
    while(t--){
    	ll n,sum; cin>>n>>sum;
    	vector<ll> a(n);
    	for(int i=0;i<n;++i){
    		cin>>a[i];
		}
		int check=0;
		sort(a.begin(),a.end());
		for(int i=0;i<n-2;++i){
			int j=i+1,k=n-1;
			while(j<k){
				if(a[i]+a[j]+a[k]>sum) k--;
				else if(a[i]+a[j]+a[k]<sum) j++;
				else{
					check=1;
					break;
				}
			}
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

