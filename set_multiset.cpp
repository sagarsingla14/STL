#include <bits/stdc++.h>
#include <set>
#define ll long long
using namespace std;

//  ---------------------------------------- SET AND MULTISET -------------------------------------------  //

int main(){
	set <ll,greater <ll> > s;
	s.insert(10);
	s.insert(70);
	s.insert(60);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	s.insert(50);
	set <ll,greater <ll> > :: iterator i;
	for(i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	set <ll> set2(s.begin(),s.end());
	set <ll, greater <ll> > :: iterator z;
	for(z=set2.begin();z!=set2.end();z++){
		cout<<*z<<" ";
	}
	cout<<endl;
}
