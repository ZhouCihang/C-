#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    cout << "first element of array: " << arr[0] << endl;

    cout << "first element of array: " << *p << endl;

    return 0;
}