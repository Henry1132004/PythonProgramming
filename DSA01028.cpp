#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;
int prime[10000001];
int n = 10000001;
void sang(){
	 for(int i = 0; i <= n; i++){
	 	  prime[i] = 1;
	 }
	 prime[0] = prime[1] = 0;
	 for(int i = 2; i <= sqrt(n); i++){
	 	  if(prime[i]){
	 	  	 for(int j = i * i; j <= n; j += i){
	 	  	 	   prime[j] = 0;
				}
		   }
	 }
}


int main(){
	sang();
	ll n;  cin >> n;
	for(int i = 0; i < n; i++){
		  if(prime[i])
		       cout << i << " ";
	}
	cout << endl;
}
