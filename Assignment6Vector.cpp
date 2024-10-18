#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

 class item{
 public:
	char name[10];
	int quantity;
	int cost;
	int code;

	bool operator==(const item& i1)
		{
		if(code==i1.code) return 1;
		return 0;
		}

	bool operator<(const item& i1)
	{
			if(cost==i1.cost) return 1;
			return 0;
			}


};

 vector<item>o1;
 void print(item &i1);
 void display();
 void insert();
 void search();
 void dlt();

 bool compare(const item& i1,const item& i2)
 			{
	 	 	 	 return i1.cost<i2.cost;
 			}

int main() {
	int ch;
	do
	{
		cout<<"\n ****MENU****"<<endl;
		cout<<"1.Insert"<<endl;
		cout<<"2.Display"<<endl;
		cout<<"3.Search"<<endl;
		cout<<"4.Sort"<<endl;
		cout<<"5.Delete"<<endl;
		cout<<"6.Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;

		switch(ch)
		{
		case 1: insert();
		break;

		case 2: display();
		break;

		case 3: search();
				break;

		case 4: sort(o1.begin(),o1.end(),compare);
		cout<<"\n Sorted on cost";
		display();
				break;

		case 5: dlt();
				break;

		case 6: exit(0);
		}

	}while(ch!=7);
	return 0;
}

void insert()
{
	item i1;

	cout<<"Enter Item Name"<<endl;
	cin>>i1.name;
	cout<<"Enter Item Quantity"<<endl;
	cin>>i1.quantity;
	cout<<"Enter Item Cost"<<endl;
	cin>>i1.cost;
	cout<<"Enter Item Code"<<endl;
	cin>>i1.code;

	o1.push_back(i1);
}

void display()
{
for_each(o1.begin(),o1.end(),print);
}
void print(item &i1)
{
	cout<<"\n";
	cout<<"\n item Name:-"<<i1.name;
	cout<<"\n item Quantity:- "<<i1.quantity;
	cout<<"\n item Cost:-"<<i1.cost;
	cout<<"\n item Code:-  "<<i1.code;
}

void search()
{
	vector<item>::iterator p; item i1;
	cout<<"\n Enter code to search Item";
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		cout<<"\n Not found";
	}
	else
	{
		cout<<"\n Found"<<endl;
		cout<<"\n Item name"<<p->name<<endl;
		cout<<"\n Item quantity"<<p->quantity<<endl;
		cout<<"\n Item cost"<<p->cost<<endl;
		cout<<"\n Item code"<<p->code<<endl;
	}
}

void dlt()
{
	vector<item>::iterator p;
	item i1;
	cout<<"enter item code to delete";
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
		if(p==o1.end())
		{
			cout<<"\n Not found";
		}
		else
		{
			o1.erase(p);
			cout<<"\n Deleted";
		}
}

