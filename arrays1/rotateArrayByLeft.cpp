#include<iostream>
using namespace std;

int arrayLeftRotation(int size)
{
    int arr[size]  , temp ;

    cout<<"Enter the numbers :";
    for( int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    temp = arr[0];
    
    for(int i = 0 ; i <= size - 2 ; i++)
    {
        arr[i] = arr[ i + 1];
    }
    arr[size - 1] = temp;

    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size :";
    cin>>size;

    arrayLeftRotation(size);
}