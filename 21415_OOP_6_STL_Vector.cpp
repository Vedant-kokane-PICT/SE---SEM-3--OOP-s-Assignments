// 21415 - Vedant Kokane

#include <iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

class Student{
public :
	char name[50];
	char dob[50];
	int roll;
	int ph_no;
//
	void get_data(){
		cout<<"Enter name - "<<endl;
		cin>>name;
		cout<<"Enter roll no - "<<endl;
		cin>>roll;
		cout<<"Enter date of birth - "<<endl;
		cin>>dob;
		cout<<"Enter phone no - "<<endl;
		cin>>ph_no;
	}
	void print(){
		cout<<"name - "<<name<<endl;
		cout<<"roll no - "<<roll<<endl;
		cout<<"Date of birth - "<<dob<<endl;
		cout<<"Phone no - "<<ph_no<<endl;
		cout<<endl;
	}

    // will be used for sorting
	friend bool compare(Student &s1,Student &s2);

    // will be used for searching
    bool operator==(const Student& i1) 
    {
    if(roll==i1.roll)
      return 1;
    return 0;
    }
    
};

bool compare(Student &s1,Student &s2){
        return s1.roll<s2.roll;
    }



int main() {
vector <Student> s1;
    char c = 'y';
    while(c != 'n'){
            cout<<"1. Add data"<<endl;
            cout<<"2. Display data (Unsorted)"<<endl;
            cout<<"3. Display data (sorted)"<<endl;
            cout<<"4. Find data in record"<<endl;
            int choice;
            cin>>choice;
            if(choice==1){
                    Student s;
                    s.get_data();
                    s1.push_back(s);
            }
            else if(choice==2){
                    for(auto x:s1){
                            x.print();
                    }
            }
            else if(choice==3){
                    sort(s1.begin(),s1.end(),compare);
                    for(auto x:s1){
                            x.print();
                    }
            }
            else if(choice==4){
                    Student s;
                    sort(s1.begin(),s1.end(),compare);
                    vector <Student> :: iterator p;
                    cout<<"Enter roll no to be searched - "<<endl;
                    cin>>s.roll;
                    p = find(s1.begin(),s1.end(),s);
                    if(p == s1.end()){
                        cout<<"Not found"<<endl;
                    }
                    else{
                        cout<<"In sorted list Found at LOC - "<<p-s1.begin()<<endl;
                    }
            }
            cout<<"Do you want to continue (y/n)"<<endl;
            cin>>c;
    }
	return 0;
}
