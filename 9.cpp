#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a,b;
	cin>>n;
	int ma=99999,mb=99999;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(a<ma){
			ma=a;
			mb=b;
		}
		else if(a==ma){
			if(b<mb) mb=b;
		}
	}
	
	cout<<ma<<" "<<mb;
	
	return 0;
}
