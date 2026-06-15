#include<iostream>
using namespace std;

int swapFirstAndLast(int size)
{
    int arr[size];

    cout<<"Enter numbers :";
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
   
    int i = 0;
    int j = size - 1;
    cout<<"Before swap of first and last element = "<<arr[i]<<" , "<<arr[j]<<endl;

    swap(arr[i] , arr[j]);
    
    cout<<"swap of first and last element from array = "<<arr[i]<<" , "<<arr[j];
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    swapFirstAndLast(size);
}