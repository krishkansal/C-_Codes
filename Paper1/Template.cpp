#include <iostream>
using namespace std;
template <class T>
T GetMin(T a, T b){
	T result;
	result=(a<b)? a : b;
	return (result);
	}
	
template <class A>
A GetMax(A a, A b){
	A result;
	result=(a>b)? a : b;
	return (result);
	}

int main(){
	int i=5 , j=6 , k;
	long l=10 , m=5 ,n;
	float a=2.6 , b=8.1 , c;
	k=GetMin<int>(i,j);
	n=GetMin<long>(l,m);
	c=GetMin<float>(a,b);
	cout << k << endl;
	cout << n << endl;
	cout << c <<endl;
	cout<<endl;
	k=GetMax<int>(i,j);
	n=GetMax<long>(l,m);
	c=GetMax<float>(a,b);
	cout << k << endl;
	cout << n << endl;
	cout << c <<endl;
	
}







//template <class T>
//T GetMax(T a, T b){
//	T result;
//	result=(a>b)? a : b;
//	return (result);
//	}
//
//int main(){
//	int i=5 , j=6 , k;
//	long l=10 , m=5 ,n;
//	float a=2.6 , b=8.1 , c;
//	k=GetMax<int>(i,j);
//	n=GetMax<long>(l,m);
//	c=GetMax<float>(a,b);
//	cout << k << endl;
//	cout << n << endl;
//	cout << c <<endl;
//	
//}
