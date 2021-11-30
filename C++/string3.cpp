#include<iostream>
#include<string>
using namespace std;

int main() {

    string s = "hello world!!!";
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    cout << s << endl;
    return 0;
}