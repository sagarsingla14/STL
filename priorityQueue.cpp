#include <bits/stdc++.h>
#define ll long long
using namespace std;

// ------------------------------- PRIORITY QUEUE ------------------------------------ // 
int main(){
	ll t;
	cin>>t;
	priority_queue <ll> pq;
	while(t--){
		ll a;
		cin>>a;
		pq.push(a);
	}
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;	
}
