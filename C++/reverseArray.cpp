#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 2, 5, 4, 6, 9};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    int temp;

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout<<arr[i]<<endl;

    }
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout<<arr[i]<<endl;

    }

    return 0;
}