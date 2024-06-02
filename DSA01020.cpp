#include<bits/stdc++.h>
using ll = long long;
int const MOD = 1e9 + 7;
using namespace std;

int main(){
	 int t;   cin >> t;
	 while(t--){
	 	 int n;  cin >> n;
	 	 int a[n];
	 	 for(int i = 0; i < n; i++){
	 	 	  cin >> a[i];
		  }
		   sort(a, a + n);
		   for(int i = 0; i < n; i++){
		   	    cout << a[i] << " ";
		   }
		    cout << endl;
		}
	}