#include<iostream>
using namespace std;

int displayAverageArray(int size)
{
    float sum = 0 , average;
    int arr[size];

    for( int i = 0 ; i < size ; i++)
    {
        cout<<"Enter the number : ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    average = sum / size;
    cout<<"Average = "<< average ;
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size if array : ";
    cin>>size;

    displayAverageArray(size);
}