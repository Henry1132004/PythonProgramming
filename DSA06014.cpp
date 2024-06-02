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

int checkprime(ll n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
//	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		if(n%2==1&&n!=1&&n!=3){
			if(checkprime(n-2)) cout<<"2 "<<n-2<<el;
			else cout<<"-1\n";
		}
		else if(n==1||n==3) cout<<"-1\n";
		else{
			if(n==2) cout<<"-1\n";
			else if(n==4) cout<<"2 2\n";
			else{
				for(int i=3;i<=n/2;++i){
					if(checkprime(i)&&checkprime(n-i)){
						cout<<i<<" "<<n-i<<el;
						break;
					}
				}
			}
		}
	}
}
