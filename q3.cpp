// Create sets with different data types in Python or C++. Perform set operations
// like union, intersection, and difference. Print the results

#include <iostream>
using namespace std;

int main ()
{
    // union
    union uType
    {
        int a;
        int b;
    };
    union uType u;

    u.a = 27;
    cout << u.b << endl;
    u.b = 6;
    cout << u.a << endl;

    // set_intersection

    return 0;
}