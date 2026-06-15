#include<iostream>
using namespace std;

int copyArrayToAnother(int size)
{
    int arr[size] , i;

    cout<<"Enter numbers : ";
    for( i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"first array is =  ";
    for(i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int j = 0 ; j < size ; j++)
    {
        arr[i] = arr[j] ;
    }
    cout<<"Copied array is =  ";
    for(int j = 0 ; j < size ; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    copyArrayToAnother(size);
}