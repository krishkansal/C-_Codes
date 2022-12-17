#include <iostream>
using namespace std;

class A{
	public:
		void fA()
		{
			cout<<"\nA called";
		}
};
class B{
	public:
		void fB()
		{
			cout<<"\nB called";
		}
};

class C{
	public:
		void fC()
		{
			cout<<"\nC called";
		}
};
class D: public A,public B,public C{
	public:
		void fD()
		{
			cout<<"\nD called";
		}
};

int main(){
	D obj;
	obj.fA();
	obj.fB();
	obj.fC();
	obj.fD();
}
