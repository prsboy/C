/*
    1. arr == &arr[0]
    2. *arr == arr[0]
    3. ptr + 1 == ptr에 sizeof(*ptr)를 더한 값
*/


#include <iostream>

using namespace std; 

int main()
{
    int arr[2][3] = {{1,2,3},{4,5,6}};
    
    for(int (*row)[3] = arr; row < arr + 2; row++)
    {
        for(int *col = *row; col < *row + 3; col++)
        {
            cout<<*col<<" ";
        }
        cout<<endl;
    }
}