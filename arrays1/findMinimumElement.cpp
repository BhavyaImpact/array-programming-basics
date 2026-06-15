#include<iostream>
using namespace std;

int findMinimumElement(int size)
{
    int arr[size] , smallest;
    cout<<"Enter the numbers : ";

    cin>>arr[0];
    smallest = arr[0];
    
    for(int i = 1; i < size ; i++)
    {
        cin>>arr[i];

        if(arr[i] < smallest)
        smallest = arr[i]; 
    }
    cout<<"The smallest element is ="<<" "<<smallest;
    return smallest;
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    findMinimumElement(size);
}