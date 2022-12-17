#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){
	

	
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}	
//	for(int i=0;i<n;i++){
//		int s=0;
//		int e=0;
//		string a=to_string(arr[i]);         //"2456"
//		int b=a.length(); 					//4
//		for(int j=0;j<b/2;j++){
//			s=s+(int)a[j];		
//			e=e+(int)a[j+b/2];			
//		}
//		
//		if(s==e){
//			cout<<"yes"<<endl;
//		}else{
//			cout<<"no"<<endl;
//		}
//		
//	}
//	
//	
//	
//}






	string str;
	string temp;
	string temp1;
	int flag=0;
	getline(cin,str);
	int n=str.length()/2;
	int n1=str.length();
	cout<<n<<endl;

	for(int i=0;i<n;i++){
		temp[i]=str[i];
		cout<<temp[i];
		}
		cout<<endl;
		for(int i=n;i<n1;i++){
			temp1[i]=str[i];
			cout<<temp1[i];
		}
		cout<<endl;	
	for(int i=0;i<n;i++){
		if(temp[i]==temp1[n+i]){
			flag=1;
		}
	}
	if(flag==1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}

	}

