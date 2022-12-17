#include <iostream>
using namespace std;

class Student{
	string Name;
	int RollNo;
	double Marks;
	public:
		void setName();
		void setRollNo();
		void setMarks();
		void getName();
		void getRollNo();
		void getMarks();
};

void Student::setName(){
	cout<<"Enter Name: ";
	cin>>Name;
}
void Student::setRollNo(){
	cout<<"\nEnter RollNo: ";
	cin>>RollNo;
}
void Student::setMarks(){
	cout<<"\nEnter Marks: ";
	cin>>Marks;
}
void Student::getName(){
	cout<<"name: "<<Name<<endl;
}
void Student::getRollNo(){
	cout<<"RollNo: "<<RollNo<<endl;
}
void Student::getMarks(){
	cout<<"Marks: "<<Marks<<endl;
}

int main(){
	Student obj;
	obj.setName();
	obj.setRollNo();
	obj.setMarks();
	obj.getName();
	obj.getRollNo();
	obj.getMarks();
}

//class Student{
//	private:
//		string name;
//		int rollno;
//		double PAMarks;
//	public:
//		void setName(string);
//		void setRollno(int);
//		void setPAmarks(double);
//		string getName();
//		int getRollno();
//		double getPAmarks();
//};
//
//void Student::setName(string n){
//	name=n;
//} 
//void Student::setRollno(int r){
//	rollno=r;
//}
//void Student::setPAmarks(double m){
//	PAMarks=m;
//}
//string Student::getName(){
//	return name;
//}
//int Student::getRollno(){
//	return rollno;
//}
//double Student::getPAmarks(){
//	return PAMarks;
//}
//
//int main(){
//	Student rec;
//	rec.setName("Krish");
//	rec.setRollno(1412);
//	rec.setPAmarks(80);
//	cout<<"Name : "<<rec.getName()<<endl;
//	cout<<"RollNo : "<<rec.getRollno()<<endl;
//	cout<<"PaMarks : "<<rec.getPAmarks()<<endl;	
//}
