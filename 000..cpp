#include<bits/stdc++.h>
using ll = long long;

using namespace std;
// 2 3 5 5 20 80 
int main(){
	 int t;   cin >> t;
	 while(t--){
	 	  int n, x;   cin >> n >> x;
	 	  int a[n];
	 	  for(int i = 0; i < n; i++){
	 	  	   cin >> a[i];
		   }
		  sort(a, a + n);
		  int ok = 0;
		  for(int i = 0; i < n; i++){
		  	   if(binary_search(a, a + n, a[i] + x)){
		  	   	    cout << 1 << endl;
		  	   	    ok = 1;
		  	   	    break;
			 }
		  }
		  if(!ok)  cout << "-1" << endl;
	}
}
		