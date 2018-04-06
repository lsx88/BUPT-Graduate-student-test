#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a; 
	int c=0;
	int e=0; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==1) c++;
		else	e++;
	}
	if(e>c) cout<<"NO";
	else cout<<"YES";
	return 0; 
}
