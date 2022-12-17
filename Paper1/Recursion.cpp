#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}

int add(int n){
	return (add(n-1));
}
int main(){
	cout<<fibonacci(5)<<endl;
	cout<<add(5);
}






//int factorial(int n){
//	if(n==0){
//		return 1;
//	}
//	int fac=factorial(n-1);
//	return n*fac;
//}
//int main(){
//	cout<<factorial(3);
//}




//int power(int n,int p){
//	if(p==0){
//		return 1;
//	}
//	int prevpower=power(n , p-1);
//	return n*prevpower;
//}
//int main(){
//	cout<<power(3,3);
//}





//int sum(int n){
//	if(n==0){
//		return 0;
//	}
//	int prevsum=sum(n-1);
//	return n+prevsum;
//}
//int main(){
//	cout<<sum(3);
//	
//}
