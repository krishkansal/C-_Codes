#include <iostream>
using namespace std;
int main(){
	int *ptr;
	int n;
	cin>>n;
	ptr=new int[n];
	for(int i=0;i<n;i++){
		ptr[i]=42+i;
	}
		for(int i=0;i<n;i++)
		cout<<ptr[i]<<endl;
			delete ptr;
		return 0;
}
