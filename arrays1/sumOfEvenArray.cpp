#include<iostream>
using namespace std;

int sumEvenArray(int size )
{
    int arr[size] , sum = 0 ;
   for(int i = 0 ; i < size ; i++)
   {
     cout<<"Enter a number : ";
     cin>>arr[i];

     if(arr[i] % 2 == 0 )
     {
        sum = sum + arr[i];
     }
    }
    cout<<"The sum of even numbers in array are : " << sum << endl;
    return 0;
}
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    sumEvenArray(size);
}