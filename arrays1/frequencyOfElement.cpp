#include<iostream>
using namespace std;

int frequencyOfElement(int size)
{
    int arr[size], i ;

    cout<<"Enter the numbers :";
    for( i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    for( i = 0 ; i < size ; i++)
    {
        int count = 0;

        for(int k = 0 ; k < i ; k++)
        {
               if(arr[i] == arr[])
            {
                break;
            }
        }
        
        for(int j = i+1 ; j < size ; j++)
        {
            if(arr[i] == arr[j]) 
            {
                count = count + 1;
            }
        }
        cout<<arr[i]<<" appears "<< count <<" times "<<endl;
    }
    
    return 0;
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    frequencyOfElement(size);
}