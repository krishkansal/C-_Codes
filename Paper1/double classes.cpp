#include <iostream>
using namespace std;


class person{
	string Name;
	public:
		void setName(string);
		string getName();
		
};

class student{
	string Name;
	int Rollno;
	public:
		void setName(string);
		void setRollno(int);
		string getName();
		int getRollno();
		
};

void person::setName(string s){
	Name=s;
}
string person::getName(){
	return Name;
}


void student::setName(string sname){
	Name=sname;
}
void student::setRollno(int r){
	Rollno=r;
}

string student::getName(){
	return Name;
}
int student::getRollno(){
	return Rollno;
}


int main(){
	person obj;
	obj.setName("krish");
	cout<<"P_Name : "<<obj.getName()<<endl;
	
	student sobj;
	sobj.setName("shruti");
	sobj.setRollno(1409);
	cout<<"S_name : "<<sobj.getName()<<endl;
	cout<<"S_Rollno : "<<sobj.getRollno()<<endl;
	}











								//2nd Method



//class person{
//	string Name;
//	public:
//		void setName();
//		void getName();
//		
//};
//
//class student{
//	string Name;
//	int Rollno;
//	public:
//		void setName();
//		void setRollno();
//		void getName();
//		void getRollno();
//		
//};
//
//void person::setName(){
//	cout<<"Enter Person_name: ";
//	cin>>Name;
//}
//void person::getName(){
//	cout<<"\nName: "<<Name<<endl;
//}
//
//
//void student::setName(){
//	cout<<"\nEnter Student_name: ";
//	cin>>Name;
//}
//void student::setRollno(){
//	cout<<"\nEnter Student_rollno: ";
//	cin>>Rollno;
//}
//
//void student::getName(){
//	cout<<"\nName: "<<Name;
//}
//void student::getRollno(){
//	cout<<"\nRollno: "<<Rollno;
//}
//
//
//int main(){
//	person obj;
//	obj.setName();
//	obj.getName();
//	
//	student sobj;
//	sobj.setName();
//	sobj.setRollno();
//	sobj.getName();
//	sobj.getRollno();
//	}

								//3rd Method

//class person{
//	string name;
//	public:
//		void setname(){
//			cout<<"enter name :";
//			cin>>name;
//		}
//		string getname(){
//			return name;
//		}
//};
//
//class student{
//	string name;
//	int roll_no;
//	public:
//		void setname(){
//			cout<<"\nenter name :";
//			cin>>name; 
//		}
//		void setroll_no(){
//			cout<<"\nenter roll_no :";
//			cin>>roll_no; 
//		}
//		
//		int getroll_no(){
//			return roll_no;
//		}
//		string getname(){
//			return name;
//		}
//};
//
//int main(){
//	
//	person pobj;
//	pobj.setname();
//	cout<<"\nperson name : "<<pobj.getname();
//	
//	student sobj;
//	sobj.setroll_no();
//	sobj.setname();
//	cout<<"\nstudent name :" <<sobj.getname() ;
//	sobj.setroll_no();
//	cout<<"\nstudent roll_no : "<<sobj.getroll_no();	
//}
