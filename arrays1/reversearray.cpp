#include<iostream>
using namespace std;

int displayReverseArray( int size)
{
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout << "Enter the number : ";
        cin>>arr[i];
    }
    for(int i = size -1 ; i >= 0 ; i-- )
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
    
    displayReverseArray(input);
    
}
