#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::vector;
using namespace std;

int main(){
    string word;
    vector<string> fruit;

    while(cin >> word){
        for (int i = 0; i < word.size(); i++)
        {
            word[i] = toupper(word[i]);
        }
        fruit.push_back(word);
    }
    /*for(int i = 0; i < fruit.size(); i++)
        cout<<fruit[i]<<endl;*/
    cout<<"hahahaha"<<endl;    
    return 0;
}