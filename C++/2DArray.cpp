#include <iostream>
using namespace std;
#include <string>

int main(){

    int arr2[3][3] = 
    {
        {100,100,100},
        {90, 50, 100},
        {60, 70, 80}
    };

    string name[3] = {"David", "Teng Fei", "Da Fu"};

    for(int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
        int sum = 0;
        for(int j = 0; j < sizeof(arr2[0])/sizeof(arr2[0][0]); j++){
            cout << arr2[i][j] << " ";
            sum += arr2[i][j];
        }
        cout << "score of " << name[i] << ": is "<<sum<<endl;
    }

    cout << "2D array memory space " << sizeof(arr2) << endl;
    cout << "2D array 1 line memory space " << sizeof(arr2[0]) << endl;
    cout << "2D array each element memory space " << sizeof(arr2[0][0]) << endl;

    cout << "2D array row number " << sizeof(arr2)/sizeof(arr2[0]) << endl;
    cout << "2D array column number " << sizeof(arr2[0])/sizeof(arr2[0][0]) << endl;
    
    return 0;
}