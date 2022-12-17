#include <iostream>
using namespace std;

void arms(int n){
	int s=0;
	int r;
	int temp=n;
	while(n>0){
		r=n%10;
		n=n/10;
		s=s+(r*r*r);
		
	}
	if(temp==s){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
//int armstrong(int a[]){
//		int s=0;
//		for(int i=0;i<3;i++){
//			int temp=a[i];
//			while(temp>0){
//			int r=temp%10;
//			temp=temp/10;	
//			s=s+(r*r*r);	
//			}
//			if(temp==s){
//				return 1;
//			}
//		}return 0;
//	
//	
//}

int main(){
	
	int n;
	cin>>n;
	arms(n);
//		int n=371;
//		int s=0;
//		int r;
//		int temp=n;
//			while(n>0){
//			r=n%10;
//			n=n/10;	
//			s=s+(r*r*r);	
//			}
//			if(temp==s){
//				cout<<"arm";
//			}else{
//				cout<<"not";
//			}return 0;
		}
//	int main(){
//	
//int n=153;
//int r,sum=0,temp;       
//temp=n;    
//while(n>0)    
//{    
//r=n%10;    
//sum=sum+(r*r*r);    
//n=n/10;    
//}    
//if(temp==sum)    
//cout<<"Armstrong Number."<<endl;    
//else    
//cout<<"Not Armstrong Number."<<endl;   
//return 0;  
//}  



