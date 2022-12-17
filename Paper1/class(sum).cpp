#include <iostream>
using namespace std;
class Number{
	int num1,num2;
	public:
		int getNum1();
		int getNum2();
		void setNum1();
		void setNum2();
		int cal_sum();
		int cal_sub();
		int cal_mult();
		float cal_div();
		int cal_avg();
		int smallest();
		
};

void Number::setNum1(){
	cout<<"Enter num1: ";
	cin>>num1;
}
void Number::setNum2(){
	cout<<"Enter num2: ";
	cin>>num2;
}
int Number::getNum1(){
	return num1;
}
int Number::getNum2(){
	return num2;
}
int Number::cal_sum(){
	return num1+num2;	
}
int Number::cal_sub(){
	return num1-num2;
}

int Number::cal_mult(){
	return num1*num2;
}

int Number::cal_div(){
	return num1/num2;
}
float Number::cal_avg(){
	return (num1+num2)/2;
}
int Number::smallest(){
	
}
int main(){
	Number obj;
	obj.setNum1();
	obj.setNum2();
	cout<<"num1 = " <<obj.getNum1()<<endl;
	cout<<"num2 = " <<obj.getNum2()<<endl;
	cout<<"sum = "<<obj.cal_sum()<<endl;
	cout<<"sub = "<<obj.cal_sub()<<endl;
	cout<<"mult = "<<obj.cal_mult()<<endl;
	cout<<"mult = "<<obj.cal_mult()<<endl;
	cout<<"avg = "<<obj.cal_avg();	
}
