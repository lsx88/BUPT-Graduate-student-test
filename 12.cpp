/*
题目链接：https://www.nowcoder.com/practice/a988eda518f242c29009f8620f654ede?tpId=40&tqId=21527&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking 
这道题其实思路很简单，最主要是要懂得注意细节，一定要画图，一定要画图，一定要画图！！！

可以直接使用反转函数reverse(), 插入函数insert()以及擦去函数erase() 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char str[101];
void turn(char str[],int s,int l){
	char ch;
	int k=0;
	int r=s;

	for(int i=r;i<r+l/2;i++){
		//cout<<str[i]<<" "<<str[s+l-1-k]<<endl;
		ch=str[i];
		str[i]=str[s+l-1-k];
		str[s+l-1-k]=ch;
		k++;
	}
	cout<<str<<endl;
}
void replace(char re[],int s,int l){
	int j=1;
	char temp1[101];
	char temp2[101]; 
	int count=0;
	for(int i=0;i<=s-1;i++){	
		//cout<<str[i];
		temp1[count]=str[i];
		count++;
	}
	
	//cout<<re;
	for(int i=0;i<strlen(re);i++){
		temp1[count]=re[i];
		count++;
	}
	
	
	for(int i=s+l;i<=strlen(str);i++){	
		//cout<<str[i];
		temp1[count]=str[i];
		count++;
	}
	
	//cout<<endl;
	strcpy(str,temp1);
	//str=temp1;
	cout<<str<<endl;
}
int main(){
	
	int n;
	cin>>str;

	cin>>n;
	int op[4];
	while(n>=1){

		char ch;
		for(int j=1;j<=3;j++){
			cin>>ch;
			op[j]=ch-'0';
		}
			if(op[1]==0) {
			turn(str,op[2],op[3]);
		}
			else{
				char re[101];
				
					cin>>re;
				replace(re,op[2],op[3]);
			}
		
	n--;
}

	return 0;
} 
