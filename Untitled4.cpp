#include <iostream>
using namespace std;

int* demo(){
	static int a[5]={11,22,33,44,55};
	return a;
}

int main(){
	int* ptr;
	ptr=demo();
	cout<<"Array is ";
	for(int i=0;i<5;i++){
		cout<<ptr[i]<<"\t";
	}
	
}
