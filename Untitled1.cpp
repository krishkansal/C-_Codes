#include <iostream>
using namespace std;
struct student{
	int rollno;
	int marks;
};
int main(){
	struct student s1;
	cout<<"Enter the roll no: ";
	cin>>s1.rollno;
	cout<<"Enter the marks: ";
	cin>>s1.marks;
	cout<<s1.rollno<<" "<<s1.marks;
}
