#include<iostream>
using namespace std;

int lastOccurance(int size , int element)
{
    int arr[size] , value = -1;

    cout<<"Enter number : "<<endl;

    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];

        if(arr[i] == element) 
        {
            value = i;
        }
    }
    return value;
}
int main()
{
    int size , element ;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element to search :";
    cin>>element;

    int result = lastOccurance(size,element);
    if(result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Position = " << result;
    }
} 