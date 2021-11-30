#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "hello world !!!!";

    for (int i = 0; i <= s.size() && !isspace(s[i]); i++) {
        s[i] = toupper(s[i]);
    }
    
    cout<<s<<endl;
    return 0;
}