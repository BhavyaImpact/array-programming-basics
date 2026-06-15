#include<iostream>
using namespace std;

int inputDisplayArray( int size)
{
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout << "Enter the number : ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < size ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int input;
    cout<<"Enter the size of array :" << endl;
    cin>>input;
    
    inputDisplayArray(input);
    
}