#include<iostream>
using namespace std;

int rightRotation(int size, int k)
{
    int arr[size] , temp;

    cout<<"Enter numbers :";
    for(int i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }
    
    k = k % size;

    for(int m = 0 ; m < k ; m++)
    {
         temp = arr[size - 1];

        for(int i = size - 1 ; i > 0 ; i--)
        {
            arr[i] = arr[ i - 1];
        }

        arr[0] = temp;
    } 

    cout<<"After k right rotations = ";

    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int size , k;
    cout<<"Enter the size :";
    cin>>size;
    cout<<"Enter k rotation value : ";
    cin>>k;

    rightRotation(size , k);
}