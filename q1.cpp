// Create a list in Python or array in C++ or Java with different data types.
// Perform operations like appending, removing, accessing elements and slicing

// create array in c++

#include <iostream>
using namespace std;

int main()
{
    // create array
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // accessing
    cout << arr[9] << endl;

    // math operation
    for(int i = 0; i < 9; i++)
    {
        arr[i] +=1;
    }
    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    // removing
    delete[] arr;
    return 0;
}