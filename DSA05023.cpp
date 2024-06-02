#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void khoitao(ll b[],ll n){
	for(int i=1;i<=n;++i) b[i]=0;
}

void sinh(ll b[],ll n,ll &ok){
	int i=n;
	while(i>=1&&b[i]==1){
		b[i]=0;
		--i;
	}
	if(i==0) ok=0;
	else{
		b[i]=1;
	}
}

int check(ll b[],ll n){
	ll tmp=-1;
	for(int i=1;i<=n;++i){
		if(b[i]){
			if(tmp==-1) tmp=i;
			else{
				if(i-tmp>1) return 0;
				else tmp=i;
			}
		}
	}
	return 1;
}


int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		ll n=s.size();
		ll b[n+1];
		khoitao(b,n);
		ll ok=1;
		ll sum=0;
		sinh(b,n,ok);
		while(ok){
			if(check(b,n)){
				string x="";
				for(int i=1;i<=n;++i){
					if(b[i]) x+=s[i-1];
				}
				ll a=stoll(x);
				sum+=a;
//				cout<<a<<el;
			}
			sinh(b,n,ok);
		}
		cout<<sum<<el;
	}
}




