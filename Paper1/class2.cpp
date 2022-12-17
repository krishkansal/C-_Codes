#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){

string str;
cin>>str;
if(str=="Xyz" || str=="XYz" || str=="XYZ" || str=="XyZ" || str=="xYZ" || str=="xyZ" || str=="xYz" || str=="xyz"){
	cout<<"yes";
}	else{
	cout<<"no";
}
}
