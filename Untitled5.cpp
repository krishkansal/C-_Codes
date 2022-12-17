#include <iostream>
#include <array>
using namespace std;
std::array<int,5> func(){
	std::array<int,5> f_array;
	for(int i=0;i<5;i++){
	f_array[i]=i;
	}
	return f_array;
}
int main(){
	std::array<int,5> arr;
	arr=func();
	cout<<"The Array is: ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"\t";
	}
}
