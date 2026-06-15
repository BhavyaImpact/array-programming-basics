#include<iostream>
using namespace std;

int reverseElements(int size)
{
    int arr[size];
    cout << "Enter numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int j = size - 1;

    while(i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    cout << "Reverse is = ";
    for(int k = 0; k < size; k++)
    {
    cout << arr[k] << " ";
    }
    
return 0;
}
int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;

    reverseElements(size);
}