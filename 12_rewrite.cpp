/*
ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/a988eda518f242c29009f8620f654ede?tpId=40&tqId=21527&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking 
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string str;
	int n;
	cin>>str;
	cin>>n;
	for(int i=0;i<n;i++){
		string command;
		cin>>command;
		int s,l;
		s=command[1]-'0';
		l=command[2]-'0';
		if((command[0]-'0')==0){
			
			reverse(str.begin()+s,str.begin()+s+l);
			cout<<str<<endl; 
		}
		else{
			command.erase(0,3);
			str.erase(s,l);
			str.insert(s,command);
			cout<<str<<endl;
		}
	}
	
	return 0;
}
