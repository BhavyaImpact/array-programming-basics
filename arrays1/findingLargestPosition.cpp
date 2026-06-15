#include<iostream>
using namespace std;

int findMaximumPosition(int size)
{
    int arr[size],largest=0;
    for(int i=0;i<size;i++){
        cout<<"Number : ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]==largest){
            cout<<i;
        }
    }
    return 0;
    
}
int main()
{
    int size;
    cout<<"Enter size :";
    cin>>size;

    findMaximumPosition(size);
}