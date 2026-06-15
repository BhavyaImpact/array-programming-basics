#include<iostream>
using namespace std;

int linearSearch(int size , int element)
{
    int arr[size];

    cout<<"Enter number : "<<endl;

    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
        cout<<"[ "<<i<<" ]";
        }
    }
    return 0;
}
int main()
{
    int size , element ;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element to search :";
    cin>>element;

    linearSearch(size,element);
}