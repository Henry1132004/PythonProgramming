#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	ll n; cin>>n;
	ll a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int dem=1;
	for(int i=0;i<n;++i){
		int check=1;
		for(int j=0;j<n-1;++j){
			if(a[j]>a[j+1]){
				check=0;
				swap(a[j],a[j+1]);
			}
		}
		if(check&&dem!=1) break;
		cout<<"Buoc "<<dem<<": ";
		for(int k=0;k<n;++k){
			cout<<a[k]<<" ";
		}
		cout<<el;
		dem++;
	}
}
	