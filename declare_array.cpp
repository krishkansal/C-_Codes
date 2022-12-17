#include <iostream>
using namespace std;
#define M 2
#define N 2
void array(int a[M][N]){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>a[i][j];
		}
	}
}

void display(int a[M][N]){
	
	for(int i=0;i<M;i++){
		cout<<"\n";
		for(int j=0;j<N;j++){
			cout<<a[i][j]<<"\t";
			
		}
	}
}

int main(){
	int a[M][N];
	array(a);
	display(a);
}
