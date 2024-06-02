#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;  cin >> t;
	while(t--){
	 int n;  cin >> n;
	 int a[n];
	 for(int i = 0;  i < n; i++){
		  cin >> a[i];
	 }
	 int dp1[n + 1]= {0};
	 int dp2[n + 1]= {0};
//	 ll sum1 = 0, sum2 = 0;
	 for(int i = 0; i < n; i++){
		 dp1[i] = a[i];
		  for(int j = 0; j < i; j++){
			  if(a[i] > a[j])
			    dp1[i] = max(dp1[i], dp1[j] + a[i]);
		  }
	 }
	 for(int i = n - 1; i >= 0; i--){
		 dp2[i] = a[i];
		    for(int j = 0; j < n; j++){
				  if(a[i] > a[j])
				       dp2[i] = max(dp2[i], dp2[j] + a[i]);
			}
	 }
	 ll res = 0;
	  for(int i = 0 ; i< n; i++){
		    res = fmax(res, dp2[i] + dp1[i] - a[i]);
	  }
	    cout << res << endl;
	}
}