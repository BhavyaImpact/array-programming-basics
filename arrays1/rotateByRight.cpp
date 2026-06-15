#include<iostream>
using namespace std;

int rightRotationArray(int size)
{
    int arr[size] , temp;

    cout<<"Enter numbers :";
    for(int i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }
    
    temp = arr[size - 1];

    for(int i = size - 1 ; i > 0 ; i--)
    {
         arr[i] = arr[ i - 1];
    }

    arr[0] = temp;

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

    rightRotationArray(size);
}