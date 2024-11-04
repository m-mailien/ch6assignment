//  Create a dictionary in Python or map in C++ with key-value pairs.
// Demonstrate how to access, modify, and add new entries. Print the results.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> myMap; // creating map
    myMap["apple"] = 1; // assigns
    myMap["cherry"] = 3;
    myMap["banana"] = 2;

    // access
    cout << "apple: " << myMap["apple"] << endl;

    // iterating over
    for (const auto& pair : myMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}