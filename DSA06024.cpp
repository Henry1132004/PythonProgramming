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
	for(int i=0;i<n-1;++i){
		int tmp=i;
		for(int j=i+1;j<n;++j){
			if(a[j]<a[tmp]){
				tmp=j;
			}
		}
		swap(a[i],a[tmp]);
		cout<<"Buoc "<<dem<<": ";
		for(int k=0;k<n;++k){
			cout<<a[k]<<" ";
		}
		cout<<el;
		dem++;
	}
}
