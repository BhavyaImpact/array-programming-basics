#include<iostream>
using namespace std;

int MaximumMinimum(int size)
{
    int arr[size] , largest , smallest;

    cout<<"Enter numbers : ";
    cin>>arr[0];

    largest = arr[0];
    smallest = arr[0];

    for(int i = 1 ; i < size ; i++)
    {
        cin>>arr[i];
         
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<"Largest is ="<<" "<<largest<<endl;
    cout<<"Smallest is ="<<" "<<smallest;

    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size :";
    cin>>size;

    MaximumMinimum(size);

}