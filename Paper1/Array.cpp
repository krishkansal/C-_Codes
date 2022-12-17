#include <iostream>
using namespace std;
int main(){
	

	int size;
	cin>>size;
	int arr[size];
	int sum=0;
	int sum1=0;
	int n1=sizeof(arr)/sizeof(arr[0])/2;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n1;i++){
		sum+=arr[i];
		}
		for(int i=n1;i<n;i++){
			sum1+=arr[i];
		}
	if(sum==sum1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}
	
	
	
	//								remove duplicates
//	int arr[50];
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]==arr[j]){
//				while(j<n){
//					arr[j]=arr[j+1];
//					j++;
//					n--;
//				}
//				
//			}else{
//				continue;
//			}
//		}
//	}
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//		
//	}
//	
//}
	
	
//							size of an array
//int arr[] = {5,6,2};
//int arrSize = sizeof(arr)/sizeof(arr[0]);
//int n=sizeof(arr)/sizeof(arr[0]);
//cout << "The size of the array is: " << n;
//return 0;	
//	
//}
//	
	

//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}cout<<endl;
//for(int i=n-1;i>=0;i--){
//	cout<<arr[i];
//}
//}





//							Second Smallest Element
//	int arr[4];
//	for(int i=0;i<4;i++){
//		cin>>arr[i];
//	
//	}
//		cout<<endl;
//		
//	int smallest=INT_MAX;
//	int ssmallest=INT_MAX;
//	for(int i=0;i<4;i++){
//		if(arr[i]<smallest){
//			ssmallest=smallest;
//			smallest=arr[i];
//			
//		}else{
//			if(arr[i]>smallest and arr[i]<ssmallest){
//				ssmallest=arr[i];
//			}
//		}
//	}
//	cout<<ssmallest;
//	
//	
//}
		
		
	
//									Second Largest value;
//	int arr[4];
//	for(int i=0;i<4;i++){
//		cin>>arr[i];
//	
//	}
//		cout<<endl;
//		
//	int largest=INT_MIN;
//	int slargest=INT_MIN;
//	for(int i=0;i<4;i++){
//		if(arr[i]>largest){
//			slargest=largest;
//			largest=arr[i];
//			
//		}else{
//			if(arr[i]<largest and arr[i]>slargest){
//				slargest=arr[i];
//			}
//		}
//	}
//	cout<<slargest;
//	
//	
//}
	
	
								// sum of arrays
//	int arr[4]={1,9,0,3};
//	int sum;
//	for(int i=0;i<4;i++){
//		sum=sum+arr[i];
//	}cout<<sum;
//
//	
//}

	
	
	
									//Max Min element
	
//	int arr[4]={1,9,0,3};
//	int max=arr[0];
//	int min=arr[0];
//	for(int i=0;i<4;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		
//		}
//	}cout<<max<<endl;
//	
//	for(int i=0;i<4;i++){
//		if(arr[i]<min){
//			min=arr[i];
//		}
//	}cout<<min;		
//
//}
	
						//		to find second largest value
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	};
//	cout<<endl;
//	
//	int largest=INT_MIN;
//	int seclargest=INT_MIN;
//	
//	for(int i=0;i<n;i++){
//		if(arr[i]>largest){
//			seclargest=largest;
//			largest=arr[i];
//		}else{
//			if(arr[i]>seclargest and arr[i]<largest){
//				seclargest=arr[i];
//			}
//		}
//	}
//	cout<<"second largest value is : "<<seclargest;
//}
	
	
	
//	int n;
//	cin>>n;
//	int arr[n];
//	cout<<"Enter the elements : ";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cout<<endl;
//	
//	for(int i=0;i<n;i++){
//	if(arr[i] % 2 == 0){
//		cout<<arr[i]<<endl;
//	}
//	}
//	
//}






//void array(int arr[]){
//	int n=5;
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}cout<<endl;
//}
//
//int main(){
//	int arr[]={1,2,3,4,5};
//	array(arr);
//}
//	
	
	
	
//	int arr[2][2];
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			cin>>arr[i][j];
//			
//		}
//	}
//	
//		for(int i=0;i<2;i++){
//		cout<<endl;
//		for(int j=0;j<2;j++){
//			cout<<arr[i][j]<<" ";
//			
//		}
//	}
//}
//	int array[2][2]={	
//	{1,2},
//	{3,4}
//	};
//	cout<<array[0][1];
//}
