#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int uz=0,dz=0,z=0;
		for(int i=0;i<str.length();i++){
			for(int k=0;(str[i]==str[i+k] && str[i+k]=='U');k++){
				z=k;
			}
			i=z+1;
			uz++;
		}
		cout<<uz<<endl;
		for(int i=0;i<str.length();i++){
			for(int k=0;(str[i]==str[i+k] && str[+k]=='D');k++){
				z=k;	
			}
			i=z+1;
			dz++;
		}
		cout<<dz<<endl;
	}
	return 0;
}
