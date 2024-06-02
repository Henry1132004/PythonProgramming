#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	 int n;  cin >> n;
	 int a[n];
	 for(int i = 0; i < n; i++){
		   cin >> a[i];
	 }
	 int dp[n];
	 for(int i = 0; i < n; i++){
		  dp[i] = 1;
		   for(int j = 0; j <= i; j++){
			   if(a[i] > a[j])
			     dp[i] = fmax(dp[i], dp[j] + 1);
		   }
	 }
	  cout << *max_element(dp, dp + n);
}