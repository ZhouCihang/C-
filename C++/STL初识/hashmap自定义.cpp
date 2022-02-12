#include <iostream>
using namespace std;
#include <string>
//#include <hash_map>
//#include <ext/hash_map>
#include <unordered_map>

class ClassA
{
public:
    ClassA(int a)
    {
        c_a = a;
    }
    int getValue() const
    {
        return c_a;
    }
    void setValue(int value){
        c_a = value;
    }

private:
    int c_a;
};

struct hash_A{
    size_t operator()(const class ClassA& A) const{
        return A.getValue();
    }
};

struct equal_A{
    bool operator()(const ClassA& A1, const ClassA& A2) const{
        return A1.getValue() == A2.getValue();
    }
};

int main()
{
    unordered_map<ClassA, string, hash_A, equal_A> hmap;
    ClassA a1(12);
    hmap[a1] = "I am 12";
    ClassA a2(198877);
    hmap[a2] = "I am 198877";
    
    cout <<hmap[a1]<<endl;
    cout <<hmap[a2]<<endl;
    

    return 0;
}