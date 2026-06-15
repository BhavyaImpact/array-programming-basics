#include<iostream>
using namespace std;

int findMaximumElement(int size)
{
    int arr[size] , largest ;
    cout<<"Enter the numbers :";

    cin>>arr[0];
    largest = arr[0];

    for(int i = 1 ; i < size ; i++)
    {
        cin>>arr[i];
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout<<"largest is = "<<" "<<largest;
    return largest;
}
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;

    findMaximumElement(size);
}

        