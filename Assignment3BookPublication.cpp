#include <iostream>
using namespace std;
class publication
{
public:
	char title[5];
	float price;
	void setData(){
		cout<<"Enter the title"<<endl;
		cin>>title;
		cout<<"Enter the price"<<endl;
		cin>>price;
	}
	void getData(){
		cout<<"Title of the book is:"<<title<<endl;
		cout<<"Price of the book is:"<<price<<endl;

	}
};
class Book:public publication
{
public:
	int pageno;
	void setData1(){
		cout<<"Enter the page no"<<endl;
		cin>>pageno ;
	try{
		if(pageno==0)
		{
			throw pageno;
		}
	}
	catch(int)
	{
		cout<<"page no. is not equal to zero"<<endl;
	}
	}
	void getData1(){
		cout<<"No. of pages is"<<pageno<<endl;
	}
};
class Tape:public publication
{
public:
	float time;
	void setData2(){
		cout<<"Enter the time"<<endl;
		cin>>time;
	}
	void getData2(){
		cout<<"Time of the tape is"<<time<<endl;
	}
};

int main() {
	Book book;
	Tape tape;
	int ch;

	do{
		cout<<"\nMenu \n1:Enter book details \n2:display book details \n3:enter tape details \n4:display tape details \n5:Exit";
		cout<<"\nEnter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			book.setData();
			book.setData1();
			break;

		case 2:
			book.getData();
			book.getData1();
			break;

		case 3:
			tape.setData();
			tape.setData2();
			break;

		case 4:
			tape.getData();
			tape.getData2();
			break;

		case 5:
			cout<<"end the program"<<endl;
			break;

		default :
			cout<<"wrong choice"<<endl;
			break;
		}

	}while(ch!=5);
return 0;
}
