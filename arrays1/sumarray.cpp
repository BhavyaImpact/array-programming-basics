#include<iostream>
using namespace std;

int displaySumArray(int size)
{
    int sum = 0 , arr[size] ;

    for( int i = 0 ; i < size ; i++)
    {
        cout<<"Enter the number : ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"The sum of all array is : "<< sum ;
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size if array : ";
    cin>>size;

    displaySumArray(size);
}