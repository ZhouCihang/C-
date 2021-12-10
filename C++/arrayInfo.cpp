#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "size of one element: "<< sizeof(arr[0]) << endl;
    cout << "number of element: "<< sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "address for element: "<< arr << endl;
    cout << "address for first element: "<< &arr[0] << endl;
    cout << "address for first element: "<< &arr[1] << endl;
    
    return 0;
}