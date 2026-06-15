#include<iostream>
using namespace std;

int checkNumberInArray(int input)
{
    int arr[input];
    for (int i = 0; i <= 4; i++) {
        cout << arr[i] << " ";

        if(arr[input == arr[i]])
        {
            cout<<"found";
        }
        else
        {
            cout<<"Not found";
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {3 , 7 , 9 , 5 , 8};
    checkNumberInArray(arr[5]);
}