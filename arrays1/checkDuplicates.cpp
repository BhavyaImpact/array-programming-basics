#include<iostream>
using namespace std;

int checkDuplicate(int size)
{
    int arr[size] , i ;
    cout<<"Enter numbers : "<<endl;
    for( i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    for( i = 0 ; i < size ; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
        if(arr[i] == arr[j] )
        {
            cout<<" Duplicate exist "<<arr[i];

        }
        }
    }
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    checkDuplicate(size);
}