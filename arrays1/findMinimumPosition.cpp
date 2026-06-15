#include<iostream>
using namespace std;

int findMinimumPosition(int size)
{
    int arr[size] , smallest;
    for(int i = 0 ;i < size ; i++)
    {
        cout<<"Number : ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i] == smallest){
            cout<<"[ "<<i<<" ]";
        }
    }
    return 0;
    
}
int main()
{
    int size;
    cout<<"Enter size :";
    cin>>size;

    findMinimumPosition(size);
}