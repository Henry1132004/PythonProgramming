#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl
int mod=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
struct so{
	ll val1,val2;
};

bool cmp(so a,so b){
	
	return a.val2<b.val2;
}

int main(){
//	fast();
	int t; cin>>t;
	while(t--){
		ll n,x; cin>>n>>x;
		so a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].val1;
			a[i].val2=abs(a[i].val1-x);
		}
		stable_sort(a,a+n,cmp);
		for(int i=0;i<n;++i){
			cout<<a[i].val1<<" ";
		}
		cout<<el;
	}
}