#include<iostream>
using namespace std;

int insertElement(int size , int k , int number )
{
    int arr[size] , i;

    cout<<"Enter numbers : ";
    for( i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    // for( i = size ; i >= k ; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }

    
    for(int i = k ; i < size + 1 ; i++)
    {
        
        int temp = arr [i+1];
        arr[i+1] = arr[i];
        cout<<arr[i];
     }
    // arr[k] = number;
return 0;
}
int main()
{
    int size , k , number;

    size = 5;
    k = 2;
    number = 70;
    // cout<<"Enter the size of array :";
    // cin>>size;
    // cout<<"Enter the position of element :";
    // cin>>k;
    // cout<<"Enter the number in k position :";
    // cin>>number;

    insertElement(size , k , number);
}