#include<iostream>
using namespace std;

int firstOccurance(int size , int element)
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
            return i;
        }
    }
    return -1;
}
int main()
{
    int size , element ;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element to search :";
    cin>>element;

    int result = firstOccurance(size,element);
    if(result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Position = " << result;
    }
} 