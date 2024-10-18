#include<iostream>
using namespace std;
template<class T>
void create(T*p,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<"enter the elements of array:"<<endl;
        cin>>p[i];
    }
}
template<class T>
void show(T*p, int size)
{
    int i;
    cout<<"elements of the array:\n"<<endl;
    for(i=0; i<size;i++)
    {
        cout<<" "<<p[i];
        
        
    }
}
template<class T>
void sort(T*arr,int size)
{
    int i,j,k;
    T l;
    for(i=0;i<size-1;i++)
    {
        k=i;
        for(j=i+1; j<size;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        l=arr[i];
        arr[i]=arr[k];
        arr[k]=l;
    }
}
int main()
{
    int size,size1;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int arr[size];
    create(arr,size);
    show(arr,size);
    cout<<endl;
    cout<<"array after sorting:"<<endl;
    sort(arr,size);
    show(arr,size);
    cout<<endl;
    cout<<"with float values"<<endl;
    cout<<"enter the size of float array:\n"<<endl;
    cin>>size1;
    float arr1[size1];
    create<float>(arr1,size1);
    show<float>(arr1,size1);
    cout<<endl;
    cout<<"after sorting float values"<<endl;
    sort<float>(arr1,size1);
    show<float>(arr1,size1);
    return 0;
}
