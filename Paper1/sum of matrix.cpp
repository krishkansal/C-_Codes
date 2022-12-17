#include <iostream>;
#include<cmath>;
using namespace std;

//void matrix1(int a[2][2]){
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			cin>>a[i][j];
//		}
//	}
//}
//	
//void matrix2(int b[2][2]){
//
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			cin>>b[i][j];
//		}
//	}
//}
//
//void display1(int a[2][2]){
//
//for(int i=0;i<2;i++){
//		cout<<endl;
//		for(int j=0;j<2;j++){
//			cout<<a[i][j]<<" ";
//		}
//	}cout<<endl;
//}
//
//void display2(int b[2][2]){
//
//	for(int i=0;i<2;i++){
//		cout<<endl;
//		for(int j=0;j<2;j++){
//			cout<<b[i][j]<<" ";
//			
//		}
//	}
//}

int main(){
	
	int a[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	
	int b[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>b[i][j];
		}
	}
	
	int c[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			 c[i][j]=a[i][j]*b[i][j];
		
		}	
	}


	for(int i=0;i<2;i++){
		cout<<endl;
		for(int j=0;j<2;j++){
			cout<<a[i][j]<<" ";
		}
	}cout<<endl;
	

	for(int i=0;i<2;i++){
		cout<<endl;
		for(int j=0;j<2;j++){
			cout<<b[i][j]<<" ";
		}
	}cout<<endl;
		for(int i=0;i<2;i++){
		cout<<endl;
		for(int j=0;j<2;j++){
			cout<<c[i][j]<<" ";
		}
	}
}
	

	

	
	
	
//	int a[2][2];
//	int b[2][2];	
//	matrix1(a);
//	matrix2(b);
//	display1(a);
//	display2(b);
	
	
