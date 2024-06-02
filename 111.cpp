#include<bits/stdc++.h>
using ll = long long;

using namespace std;
int n, k;
bool cmp(pair<int, int> a, pair<int, int> b){
	  if(abs(a.second - k) == abs(b.second - k))  return a.first < b.first;
	  else  return abs(a.second - k) < abs(b.second - k);
}
int main(){
	int t;   cin >> t;
	while(t--){
	    cin >> n >> k;
		vector<pair<int, int>> x(n);
		for(int i = 0; i < n; i++){
	       	 x[i].first = i;
			 cin >> x[i].second;
		}
		sort(x.begin(), x.end(), cmp);
	    for( auto it : x){
	    	  cout << it.second << " ";
		}
		cout << endl;
	}
}