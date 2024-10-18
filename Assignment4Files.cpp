#include<iostream>
#include<fstream>
using namespace std;

class file_a
{
    string name;
    int roll_no;
    public:
    void getdata()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your roll No.: ";
        cin>>roll_no;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll_no<<endl;
    }
};

int main()
{
    file_a s[100];
    int i,n;
    fstream f;
    f.open("C:\\Users\\shivam\\Desktop\\demo.txt",ios::out);
    cout<<"How many students: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].getdata();
        f.write((char *)&s[i],sizeof s[i]);
    }
    f.close();
    f.open("C:\\Users\\shivam\\Desktop\\demo.txt",ios::in);
    for(i=0;i<n;i++)
    {
        f.read((char *)&s[i],sizeof s[i]);
        s[i].display();
    }
    f.close();
    return 0;
}
