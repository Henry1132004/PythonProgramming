#include<bits/stdc++.h>
using ll = long long;

using namespace std;

int n, ok, a[10001], k;

void sinh(){
       int i = k;
       while(i >= 1 && a[i] == n - k + i){
              --i;
       }
       if(i == 0){
           cout << k << endl;
  }
       else{
           ++a[i];
           for(int j = i + 1; j <= k; j++) 
                a[j] = a[j - 1] + 1;
           }
       }
int main(){
       int t;  cin >> t;
       while(t--){
              cin >> n >> k;
              set<int> se1, se2;
              for(int i = 1; i <= k; i++){
              	   cin >> a[i];
              	   se1.insert(a[i]);
		}
		  sinh();
		for(int i = 1; i <= n; i++){
			  se2.insert(a[i]);
		}
		int cnt = 0;
		for(int x : se1){
			  if(se2.find(x) == se2.end())
			     ++cnt;
		}
		 if(cnt != 0)
		 cout << cnt << endl;
	}
}
	 