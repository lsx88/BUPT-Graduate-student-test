/*
ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/82442ee76977479e8ab4b88dfadfca9f?tpId=40&tqId=21525&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp1(string a,string b){
	for(int i=0;i<b.size();i++)
		if(b[i]>a[0]) return true;
	return false;
}
bool cmp2(string a,string b){
	int count=0;
	for(int i=0;i<b.size();i++){
		if(b[i]==b[i+1]){
			if(b[i]>a[0]) return true;
		}
	}
	return false;
}
bool cmp3(string a,string b){
	for(int i=0;i<b.size();i++){
		if(b[i]==b[i+1]&&b[i]==b[i+2]){
			
			if(b[i]>a[0]){
			
				return true;
			}
		}
	}
	return false;
}
bool cmp4(string a,string b){
	for(int i=0;i<b.size();i++){
		if(b[i]==b[i+1]&&b[i]==b[i+2]&&b[i]==b[i+3]){
			if(b[i]>a[0]) return true;
		}
	}
	return false;
}
bool cmp5(string a,string b){
	char c[100];
	char d=b[0];
	c[0]=d;
	int j=1;
	for(int i=0;i<b.size();i++){
		if(b[i]!=d){
		 	c[j]=b[i];
		 	d=b[i];
		 	j++;
		 }
	}

	for(int i=0;i<strlen(c);i++)
		if(c[i]+1==c[i+1]+1-1&&c[i]+2==c[i+2]+1-1&&c[i]+3==c[i+3]+1-1&&c[i]+4==c[i+4]+1-1){
			
		 if(c[i]>a[0])	return true;
		 }
	return false;
}
int main(){
	string a;
	string b;
	cin>>b;
	cin>>a;
	switch(a.size()){
		case 1:if(cmp1(a,b)) cout<<"YES";
			else cout<<"NO";
			break;
		case 2:if(cmp2(a,b)) cout<<"YES";
			else cout<<"NO";
			break;
		case 3:if(cmp3(a,b)) cout<<"YES";
			else cout<<"NO";
			break;
		case 4:if(cmp4(a,b)) cout<<"YES";
			else cout<<"NO";
			break;
		case 5:if(cmp5(a,b)) cout<<"YES";
			else cout<<"NO";
			break;
		default: break;
	}
	
	return 0;
}
