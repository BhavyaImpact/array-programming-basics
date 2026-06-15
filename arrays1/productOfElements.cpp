#include<iostream>
using namespace std;

int productOfAllElements(int size )
{
    int arr[size] , product = 1;
   for(int i = 0 ; i < size ; i++)
   {
     cout<<"Enter a number : ";
     cin>>arr[i];
     product = product * arr[i];
    }
    cout<<"The product of all numbers in array are : " << product << endl;
    return 0;
}
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    productOfAllElements(size);
}