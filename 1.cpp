#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10000];
	int i=0;
	while(n!=0){
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		cout<<a[j];
	return 0;
} 
