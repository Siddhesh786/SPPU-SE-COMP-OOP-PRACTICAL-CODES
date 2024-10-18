#include <iostream> 
using namespace std;
class Complex
{
public:
int real; int imaginary;
Complex()
{
real=0; 	
imaginary=0;
cout<<"Default constructor value:"<<real<<" + "<<imaginary<<"i"<<endl;
}
Complex operator+(Complex b)
{
Complex temp;
temp.real=real+b.real; temp.imaginary=imaginary+b.imaginary;
cout<<"Addition is:"<<temp.real<<" + "<<temp.imaginary<<"i"<<endl;
}
Complex operator*(Complex b)
{
Complex temp;
temp.real=(real*b.real)-(imaginary*b.imaginary); temp.imaginary=(real*b.imaginary)+(imaginary*b.real);
cout<<"Multiplication is:"<<temp.real<<" + "<<temp.imaginary<<"i"<<endl; return temp;
}
friend ostream &operator<<(ostream &output, Complex &m);
 friend istream &operator<<(istream &intput, Complex &m);
};
ostream &operator<<( ostream &output, Complex &m ) 
{ output <<"\n"<<m.real<<" + "<<m.imaginary<<"i"<<endl; 
return output;
}
istream &operator>>( istream &input, Complex &m )
{
input >> m.real>>m.imaginary;
return input;
}
int main()
{
Complex a;
cout<<"\n Enter first complex number:"<<endl;
cin>>a;
Complex b;
cout<<"\n Enter second complex number:"<<endl; cin>>b;
cout<<"\n first complex number:"<<endl; cout<<a;
cout<<"\n second complex number:"<<endl;
cout<<b; Complex c=a+b; Complex d=a*b; return 0;
}
