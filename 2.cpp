#include <iostream>
#include<string.h>
using namespace std;

class Student{

private :
	long  int *roll_no ,div,contact,telephone,dl_no;
	string name,std,dob;
	int static count;

public :
	friend class Details;  // friend class is used here

	Student(){
		roll_no = new long int (1);
		std = "";
		div = 0;
		contact = 0;
		telephone = 0;
		dl_no = 0;
		name = "";
		dob = "0";
		count++;
	}

	Student(string name,string dob,string std,long int div,long int contact,long int telephone,long int dl_no){ // @suppress("Class members should be properly initialized")
		this-> name = name;
		this-> dob = dob;
		this-> std = std;
		this-> div = div;
		this-> contact = contact;
		this-> telephone = telephone;
		this-> dl_no = dl_no;
		count++;
	}

	Student(Student &s){          // Copy of Constructor
		name = s.name;
		roll_no = s.roll_no;
		dob = s.dob;
		std = s.std;
		div = s.div;
		contact = s.contact;
		telephone = s.telephone;
		dl_no = s.dl_no;
		count++;
	}

	inline void input(){                       // function (inline)
		cout<<"Enter Class - "<<endl;
		cin>>std;
		cout<<"Enter Name of student - "<<endl;
		cin>>name;
		cout<<"Date of Birth - "<<endl;
		cin>>dob;
		cout<<"Enter Roll no - "<<endl;
		cin>>*roll_no;
		cout<<"Enter Division - "<<endl;
		cin>>div;
		cout<<"Enter Contact - "<<endl;
		cin>>contact;
		cout<<"Enter Telephone no - "<<endl;
		cin>>telephone;
		cout<<"Enter Driving license no - "<<endl;
		cin>>dl_no;
	}

	int static total(){
		cout<<"Total no of Students are "<<count<<endl;
		return count;
	}
	~Student(){
		count--;
		delete roll_no;
		// cout<<"Destructor is called  and count is "<<count<<endl;
	}
};


class Details{
public:
void print(Student &s){
		cout<<"Name of student - "<<s.name<<endl;
		cout<<"Roll no - "<<s.roll_no<<endl;
		cout<<"Class - "<<s.std<<endl;
		cout<<"Division - "<<s.div<<endl;
		cout<<"Date of Birth - "<<s.dob<<endl;
		cout<<"Contact - "<<s.contact<<endl;
		cout<<"Telephone - "<<s.telephone<<endl;
		cout<<"Driving License no - "<<s.dl_no<<endl;
	}
};

int Student :: count = 0;

int main() {
	int n;
	cout<<"Enter the total number of students : "<<endl;
	cin>>n;
	Student *s = new Student [n];

	for(int i=0;i<n;i++){
		s[i].input();
	}

	Details d;
	for(int i=0;i<n;i++){
			d.print(s[i]);
		}
	delete [] s;
	return 0;
}