// 21415 - Vedant Kokane

#include <iostream>
#include<string.h>
using namespace std;

class Publication{
protected: string title;
		float price;
public :
		Publication(){
            	title = "Title_comes_here";
            	price = 0.00;
            	cout<<"Publication's Constructor is Called."<<endl;
            }

            void get_data(){
            	cout<<"Please enter the title "<<endl;
            	cin>>title;
            	cout<<"Please enter the price "<<endl;
				cin>>price;
            }
            void display_data(){
            	cout<<"Title is - "<<title<<endl;
            	cout<<"price is - "<<price<<endl;
            }
            ~Publication(){
            	cout<<"Publication's Destructor is called."<<endl;
            }
};

class Book : protected Publication{
public :
	int page_count;
	Book(){
		page_count = 0;
	}
	
	void get_data(){ 
		try{
		    Publication :: get_data(); 
		    cout<<"Please enter the page count - "<<endl;
		     cin>>page_count;
		     if(page_count <=0){
		     throw page_count;
		     }
		}
		catch(...){
		    page_count = 0;
		    cout<<"Invalid Page Count"<<endl;
		}
	}
	
	 void display_data(){
		 Publication :: display_data();
		 cout<<"Page count is - "<<page_count<<endl;
	 }

	 ~Book(){
		 // Destructor
	 }
};


class Tape : protected Publication{
public :
	float play_count;
	Tape(){
		play_count = 0.00;
	}
	void get_data(){
		try{
		    Publication :: get_data(); 
			cout<<"Please enter the play time - "<<endl;
			cin>>play_count;
			if(play_count <=0){
			    throw play_count;
			}
		}
		catch(...){
		    play_count = 0;
		    cout<<"Invalid Play time"<<endl;
		}
	}
	
     void display_data(){
    	 Publication :: display_data();
    	 cout<<"Play time is - "<<play_count<<endl;
     }

	 ~Tape(){
	 		 // Destructor
	 	 }
};


int main() {
	Publication p;
	Book b;
	Tape t;
	char c ='y';
	int choice;
	while(c!='n'){
	cout<<"=========== Menu ==========="<<endl;
	cout<<"Select 1 for Adding new Book data"<<endl;
	cout<<"Select 2 for Adding new Audio Cassette data"<<endl;
	cout<<"============================"<<endl;
	cout<<"Enter the your choice"<<endl;
	cin>>choice;
	switch(choice){
	case 1:
		cout<<"Entity - Book"<<endl;
		b.get_data();
		b.display_data();
		break;

	case 2:
		cout<<"Entity - Audio Cassette "<<endl;
		t.get_data();
		t.display_data();
		break;

	default:
		cout<<"You have chosen a wrong choice"<<endl;
		break;
	}
	cout<<"Do you want to continue type (y/n)"<<endl;
	cin>>c;
	}
	return 0;
}
