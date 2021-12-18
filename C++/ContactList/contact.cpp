#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 1000

struct Person
{
    string mName;
    int mGender;
    int mAge;
    string mPhone;
    string mAddress;
};

struct AddressBooks
{
    struct Person personArray[MAX];
    int mSize;
};

void showMenu()
{
    cout << endl;
    cout << "******************************" << endl;
    cout << "***** 1. Add Contact *********" << endl;
    cout << "***** 2. Show Contact ********" << endl;
    cout << "***** 3. Delete Contact ******" << endl;
    cout << "***** 4. Find Contact ********" << endl;
    cout << "***** 5. Edit Contact ********" << endl;
    cout << "***** 6. Remove All Contact **" << endl;
    cout << "***** 0. Exit Contact ********" << endl;
    cout << "******************************" << endl;
    cout << endl;
}

void addPerson(struct AddressBooks *abs)
{
    if (abs->mSize == MAX)
    {
        cout << "Full Address Books" << endl;
        return;
    }
    else
    {
        string name;
        cout << "Please enter your name" << endl;
        cin >> name;
        abs->personArray[abs->mSize].mName = name;

        int gender = 0;
        cout << "Please enter your gender" << endl;
        cout << "Enter 1 is for male" << endl;
        cout << "Enter 2 is for female" << endl;

        while (true)
        {
            cin >> gender;
            if (gender == 1 || gender == 2)
            {
                abs->personArray[abs->mSize].mGender = gender;
                break;
            }
            cout << "Please enter a valid gender" << endl;
        }

        int age;
        cout << "Please enter your age" << endl;
        cin >> age;
        abs->personArray[abs->mSize].mAge = age;

        string phone;
        cout << "Please enter your phone" << endl;
        cin >> phone;
        abs->personArray[abs->mSize].mPhone = phone;

        string address;
        cout << "Please enter your address" << endl;
        cin >> address;
        abs->personArray[abs->mSize].mAddress = address;

        abs->mSize++;
        cout << "New User add successfully!" << endl;

        system("read -p 'Press Enter to continue...' var");
        system("clear");
        //system("Pause");
        //system("cls");
    }
}

int main()
{
    AddressBooks abs;
    abs.mSize = 0;

    int selected;

    while (true)
    {
        showMenu();
        cin >> selected;
        switch (selected)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            cout << "Welcome come back again" << endl;
            return 0;
            break;
        default:
            break;
        }
    }
}