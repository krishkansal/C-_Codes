#include <iostream>
using namespace std;

class Rectangle{ 
	private:
		double length;
		double width;

	public:
		void setWidth(double);
		void setLength(double);
		double getWidth() ;
		double getLength() ;
		double getArea();
};

void Rectangle::setWidth(double w){
	width=w;
}
void Rectangle::setLength(double l){
	length=l;
}
double Rectangle :: getWidth(){
	return width;
}
double Rectangle::getLength()
{
	return length;
}
double Rectangle::getArea(){
	return width*length;
}
int main(){
	Rectangle obj;
	obj.setLength(4.5);
	obj.setWidth(5.5);
	cout<<"width : "<<obj.getWidth()<<endl;
	cout<<"length : "<<obj.getLength()<<endl;
	cout<<"area : "<<obj.getArea()<<endl;		
	
}
