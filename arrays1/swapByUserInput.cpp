#include<iostream>
using namespace std;

int swapByUserInput(int size , int i , int j)
{
    int arr[size];

    cout<<"Enter numbers : ";
    for(int k = 0 ; k < size ; k++)
    {
        cin>>arr[k];
    }

    if(i < 0 || i >= size || j < 0 || j >= size)
    {
        cout << "Invalid positions";
        return 0;
    }

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    

    cout << "Array after swapping: ";
    
    for(int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
int main()
{
    int size , i , j;
    cout<<"Enter the size of array :";
    cin>>size;
    cout<<"Enter first position = ";
    cin>>i;
    cout<<"Enter second position = ";
    cin>>j;

    swapByUserInput(size , i , j); 
}
