#include<iostream>
using namespace std;

int countEvenOddArray(int size )
{
    int arr[size] , countPositive = 0 , countNegative = 0 , countZero = 0;
   for(int i = 0 ; i < size ; i++)
   {
     cout<<"Enter a number : ";
     cin>>arr[i];

     if(arr[i] > 0)
     {
        countPositive = countPositive + 1;
     }
     else if(arr[i] < 0 )
     {
        countNegative = countNegative + 1;
     }
     else{
        countZero = countZero + 1;
     }
    }
    cout<<"The positive elements in the array are : "<< countPositive << endl;
    cout<<"The negative elements in the array are : "<< countNegative << endl;
    cout<<"The zero elements in the array are : "<< countZero << endl;
   return 0;
}
int main()
{
    int size ; 
    cout<<"Enter the size of array : ";
    cin>>size;

    countEvenOddArray(size);
}