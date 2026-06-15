#include<iostream>
using namespace std;

int countDistinctElement(int size)
{
    int arr[size] , count = 0;
    cout<<"Enter the numbers :";
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
            if(arr[i] == arr[j])
            {
                count = count + 1;
            }
        }
    }
    int total = size - count;
    cout<<"Distinct values are : "<<total;
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    countDistinctElement(size);
}