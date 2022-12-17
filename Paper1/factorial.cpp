#include <iostream>;
using namespace std;

int main(){
	
	int n;
	int fact=1;
	cout<<"enter the number : ";
	cin>>n;
	if(n<0){
		cout<<"Error! Factorial of a negative number doesn't exist.";
	}else{
	
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<endl;	
	cout<<fact;
}
}
