#include <bits/stdc++.h>

using namespace std;

int main(){
	 int c, n;  cin >> c >> n;
	 int a[n];
	 for(int i = 0; i < n; i++)  cin >> a[i];
	 int dp[c + 1] = {0};
	 dp[0] = 1;
	 for(int i = 0; i < n; i++){
		  for(int j = c; j >= a[i]; j--){
			   if(dp[j - a[i]] == 1)  
			      dp[j] = 1;
		  }
	 }
	   for(int i = c; i >= 0; i--){
		    if(dp[i]){
				  cout << i;
				  return 0;
			}
	   }
}

