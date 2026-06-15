#include<iostream>
using namespace std;

int countEvenOddArray(int size )
{
    int arr[size] , countEven = 0 , countOdd = 0;
   for(int i = 0 ; i < size ; i++)
   {
     cout<<"Enter a number : ";
     cin>>arr[i];

     if(arr[i] % 2 == 0 )
     {
        countEven = countEven + 1;
     }
     else if(arr[i] % 2 !=0 )
     {
        countOdd = countOdd + 1;
     }
    }
    cout<<"The even elements in the array are : "<< countEven << endl;
    cout<<"The odd elements in the array are : "<< countOdd << endl;
   return 0;
}
int main()
{
    int size ; 
    cout<<"Enter the size of array : ";
    cin>>size;

    countEvenOddArray(size);
}