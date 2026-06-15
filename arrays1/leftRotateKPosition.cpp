#include<iostream>
using namespace std;

int leftRotationArray(int size , int k)
{
    int arr[size] , temp;

    cout<<"Enter numbers : ";
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

        k = k % size;

    for(int m = 0 ; m < k ; m++)
    {
        temp = arr[0];
    
        for(int i = 0 ; i < size - 1 ; i++)
        {
            arr[i] = arr[ i + 1];
        }
        arr[size - 1] = temp;

        }

    cout<<"After k rotation =  ";
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int size , k;
    cout<<"Enter the size if array :";
    cin>>size;
    cout<<"Enter rotation value : ";
    cin>>k;

    leftRotationArray(size , k);
}