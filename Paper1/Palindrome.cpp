#include <iostream>
using namespace std;

int palindrome1(int arr[],int n){
	for(int i=0;i<n;i++){
		int temp=arr[i];
		int ans=0;
		while(temp>0){
			int r=temp%10;
			temp=temp/10;
			ans=(ans*10)+r;
			
		}
		if(ans!=arr[i]){
			return 0;
		}
	}return 1;
}

int palindrome(int a[],int n){
	for(int i=0;i<n;i++){
		int ans=0;
		int temp=a[i];
		while(temp>0){
			int r=temp%10;
			temp=temp/10;
			ans=(ans*10)+r;
		}
		if(ans!=a[i]){
			return 0;
		}
		}return 1;
		}
	


int main(){
	int arr[3]={122};
	cout<<palindrome1(arr,3);
	
}
