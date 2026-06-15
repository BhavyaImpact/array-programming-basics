#include<iostream>
using namespace std;

int occurancesOfElement(int size , int element)
{
    int arr[size] , count = 0;

    cout<<"Enter number : "<<endl;

    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
int main()
{
    int size , element ;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element to search :";
    cin>>element;

    occurancesOfElement(size,element);
}