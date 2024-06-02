#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

int main(){
	 vector<int> v;
	 v.push_back(1);
	 v.push_back(5);
	 v.push_back(10);
	 sort(v.begin(), v.end(), greater<int>());
	 for(int x : v){
	 	  cout << x << " ";
	 }
}