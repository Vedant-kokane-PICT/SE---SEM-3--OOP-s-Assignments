// 21415 - Vedant Kokane

#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

class Student{
    public :
    int roll;
    string name;
    void get_data(){
        cout<<"enter roll and name"<<endl;
        cin>>roll>>name;
    }
    void display(){
        cout<<"Roll - "<<roll<<endl;
        cout<<"Name - "<<name<<endl;
    }
    friend bool compare(Student &s1,Student &s2);

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

int main(){
    int n;
    vector <Student> s1;
    cout<<"Enter total "<<endl;
    cin>>n;
    Student s2;
    for(int i=0;i<n;i++){
        s2.get_data();
        s1.push_back(s2);
    }
    cout<<endl<<"Before"<<endl;
    for(auto x:s1){
        x.display();
    }
     cout<<endl<<"After"<<endl;
     sort(s1.begin(),s1.end(),compare);
     for(auto x:s1){
        x.display();
    }

    vector <Student> :: iterator p;
    Student s3;
    cout<<"Enter roll"<<endl;
    cin>>s3.roll;
    p = find(s1.begin(),s1.end(),s3);
    if(p == s1.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found at - "<<p-s1.begin()<<endl;
    }
    return 0;
}
