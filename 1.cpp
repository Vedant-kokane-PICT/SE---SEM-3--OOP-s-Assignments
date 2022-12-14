#include <iostream>
using namespace std;

class Complex{
private : int real,img;
public:
Complex(){
	real = 0;
	img = 0;
}

Complex  operator + (Complex y){
	Complex z;
	z.real = real + y.real;
	z.img = img + y.img;
	return z;
}
Complex  operator - (Complex y){
	Complex z;
	z.real = real - y.real;
	z.img = img - y.img;
	return z;
}

Complex  operator * (Complex y){
	Complex z;
	z.real = (real * y.real)  - (img * y.img);
	z.img = (img * y.real) + (real * y.img);
	return z;
}


friend istream& operator >>(istream&,Complex&);
friend ostream& operator <<(ostream&, Complex&);

};



istream& operator >>(istream& in ,Complex& s){
	in>>s.real>>s.img;
	return in;

}

ostream& operator <<(ostream& out, Complex& z){
	if(z.img>0 || z.img==0){
		out<<z.real<<" + "<<z.img<<"i"<<endl;
		}
		else{
	out<<z.real<<" "<<z.img<<"i"<<endl;
		}
	return out;
}


int main() {
    system("cls");
	Complex c1;
	Complex c2;
	Complex c3;
	Complex c4;
	Complex c5;
	cout<<"Enter real and imaginary part of Complex number 1 "<<endl;
	cin>>c1;
	cout<<"1. Complex Number : "<<c1<<endl;
	cout<<"Enter real and imaginary part of Complex number 1 "<<endl;
	cin>>c2;
	cout<<"2. Complex Number : "<<c2<<endl;
	char c='y';
	while(c=='y')
	{
		cout<<"1. Addition of complex numbers "<<endl;
		cout<<"2. Subtraction of complex numbers "<<endl;
		cout<<"3. Multiplication of complex numbers "<<endl;
		int j;
		cin>>j;
		c3 = c1+c2;
		c4 = c1-c2;
		c5 = c1*c2;

		switch (j) {

			case 1:
			cout<<"addition "<<c3<<endl;
			break;

			case 2:
			cout<<"subtraction "<<c4<<endl;
			break;

			case 3:
			cout<<"product "<<c5<<endl;
			break;
		}

		cout<<"Type (y) to perform another operation else (n) to exit "<<endl;
		cin>>c;
	}


	return 0;
}