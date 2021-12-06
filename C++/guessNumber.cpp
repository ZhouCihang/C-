#include <iostream>
using namespace std;
#include <ctime>

int main(){

    //add random seed
    srand((unsigned int)time(NULL));

    int num = rand()%100 + 1;
    cout << num <<endl;
    

    int val = 0;

    while(1){
        cin >> val;

        if(val > num){
            cout << "too big" << endl;
        } else if(val < num){
            cout << "too small" << endl;
        } else{
            cout << "ok" << endl;
            break;
        }
    }
    
    return 0;
}