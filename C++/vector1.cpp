#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    vector<int> grade(11, 0);
    unsigned int score;

    while(cin>>score){
        ++grade[score/10];
    }

    for(int i=0; i != grade.size();++i){
        cout<<grade[i]<<endl;
    }

    return 0;
}