#include <iostream>;
using namespace std;
struct myprofile{
	string name;
	int roll;
};
int main(){
	myprofile profile;
	profile.name="krish";
	profile.roll=1412;
	cout<<" name : "<<profile.name<<" "<<"roll_no.: "<<profile.roll;
	
}
