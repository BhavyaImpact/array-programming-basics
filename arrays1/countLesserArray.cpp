#include<iostream>
using namespace std;

int countLesserArray(int size , int input)
{
    int arr[size] , count = 0 ;
   for(int i = 0 ; i < size ; i++)
   {
     cout<<"Enter a number : ";
     cin>>arr[i];

     if(arr[i] < input )
     {
        count = count + 1;
     }
   
   }
   cout<<count;
   return count;
}
int main()
{
    int input , size ; 
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter a number to check greater in array : ";
    cin>>input;

    countLesserArray(size, input);
}