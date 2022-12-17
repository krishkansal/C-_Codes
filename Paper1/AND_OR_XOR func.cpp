#include <iostream>
using namespace std;

class Number{
	private:
		int num1,num2;
		public:
			void setnum1();
			void setnum2();
			int getnum1();
			int getnum2();
			int bitwise_and();
			int bitwise_or();
			int bitwise_Xor();
};

void Number::setnum1(){
	cout<<"Enter the First Number: "<<endl;
	cin>>num1;
}

void Number::setnum2(){
	cout<<"Enter the Second Number: "<<endl;
	cin>>num2;
}

int Number::getnum1(){
	return num1;
}
int Number::getnum2(){
	return num2;
}
int Number::bitwise_and(){
	return (num1&num2);
}
int Number::bitwise_or(){
	return (num1|num2);
}
int Number::bitwise_Xor(){
	return (num1^num2);
}

int main(){
	Number obj;
	obj.setnum1();
	obj.setnum2();
	obj.getnum1();
	obj.getnum2();
	cout<<"Num1 & Num2 = "<<obj.bitwise_and()<<endl;
	cout<<"Num1 | Num2 = "<<obj.bitwise_or()<<endl;
	cout<<"Num1 ^ Num2 = "<<obj.bitwise_Xor()<<endl;
}
