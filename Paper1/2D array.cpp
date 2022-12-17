#include <iostream>
using namespace std;
int main(){
	
	
	  int m1[2][2];
	  int m2[2][2];
	  
	  for(int i=0;i<2;i++){
	  	for(int j=0;j<2;j++){
	  		cin>>m1[i][j];
		  }
	  }
	  
	   for(int i=0;i<2;i++){
	  	for(int j=0;j<2;j++){
	  		cin>>m2[i][j];
		  }
	  }
	  
	  
	  for(int i=0;i<2;i++){
	  	for(int j=0;j<2;j++){
	  		cout<<m1[i][j]<<" ";
		  }
		  cout<<endl;
	  }
	  cout<<endl;
	  
	  for(int i=0;i<2;i++){
	  	for(int j=0;j<2;j++){
	  		cout<<m2[i][j]<<" ";
		  }
		  cout<<endl;
	  }
	
	cout<<endl;
	int m3[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
			cout<<m3[i][j]<<" ";
		}
		cout<<endl;
	}
}
	
	
//	  int m1[3][4];
//	  int m2[4][3];
//	  
//	  for(int i=0;i<3;i++){
//	  	for(int j=0;j<4;j++){
//	  		cin>>m1[i][j];
//		  }
//	  }
//	  
//	   for(int i=0;i<4;i++){
//	  	for(int j=0;j<3;j++){
//	  		cin>>m2[i][j];
//		  }
//	  }
//	  
//	  
//	  for(int i=0;i<3;i++){
//	  	for(int j=0;j<4;j++){
//	  		cout<<m1[i][j]<<" ";
//		  }
//		  cout<<endl;
//	  }
//	  cout<<endl;
//	  
//	  for(int i=0;i<4;i++){
//	  	for(int j=0;j<3;j++){
//	  		cout<<m2[i][j]<<" ";
//		  }
//		  cout<<endl;
//	  }
//	  
//	  int ans[3][3];
//	  for(int i=0;i<3;i++){
//	  	for(int j=0;j<3;j++){
//	  		ans[i][j]=0;
//		  }
//	  }
//	  
//	  for(int i=0;i<3;i++){
//	  	for(int j=0;j<4;j++){
//	  		for(int k=0;k<4;k++){
//	  			ans[i][j]+=m1[i][k]*m2[k][j];
//			  }
//		  
//}
//	  }	  
//	  cout<<endl;
//	  
//	  for(int i=0;i<3;i++){
//	  	for(int j=0;j<3;j++){
//	  		cout<<ans[i][j]<<" ";
//		  }
//		  cout<<endl;
//	  }
//	  	
//
//}
	
	
	
	
//	int a[3][3]={
//	{1,2,3},
//	{4,5,6},
//	{7,8,9}
//	};
//	int b[3][3];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			b[i][j]=a[j][i];
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	}
