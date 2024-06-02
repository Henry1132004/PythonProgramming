#include<bits/stdc++.h>
using ll = long long;

using namespace std;

int n, ok, a[10001], k;

void sinh(){
     int i = n - 1;
     while(i >= 1 && a[i] > a[i + 1]){
     	  --i;
	 }
	 if(i == 0){
	 	for(int i = 1; i <= n; i++){
	 		  a[i] = i;
		 }
	 }
	 else{
	 	int j = n;
	 	while(a[i] > a[j]){
	 		  --j;
		 }
		 swap(a[i], a[j]);
		 reverse(a + i + 1, a + n + 1);
	 }
}
int main(){
	 int t;  cin >> t;
	 while(t--){
	 	  cin >> n;
	 	  for(int i = 1; i <= n; i++){
	 	  	  cin >> a[i];
	}
	   sinh();
	   for(int i = 1; i <= n; i++){
	   	   cout << a[i] << " ";
	   }
	    cout << endl;
	 }
}