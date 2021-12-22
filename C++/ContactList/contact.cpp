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

void showPerson(struct AddressBooks *abs)
{
    if (abs->mSize == 0)
    {
        cout << "Empty List" << endl;
    }
    else
    {
        for (int i = 0; i < abs->mSize; i++)
        {
            cout << "Name: " << abs->personArray[i].mName << "\t";
            /*if (abs->personArray[i].mGender == 1)
            {
                cout << "Gender: " << "Male"<< "\t";
            } else {
                cout << "Gender: " << "Female"<< "\t";
            }*/
            cout << "Gender: " << (abs->personArray[i].mGender == 1 ? "Male" : "Female") << "\t";
            cout << "Age: " << abs->personArray[i].mAge << "\t";
            cout << "Phone: " << abs->personArray[i].mPhone << "\t";
            cout << "Address: " << abs->personArray[i].mAddress << endl;
        }
    }
    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

int searchPerson(struct AddressBooks *abs, string name)
{

    for (int i = 0; i < abs->mSize; i++)
    {
        if (abs->personArray[i].mName == name)
        {
            return i;
        }
    }
    return -1;
}

void deletePerson(struct AddressBooks *abs)
{
    cout << "Please the person name that you wish to delete: " << endl;
    string name;
    cin >> name;
    if (searchPerson(abs, name) == -1)
    {
        cout << "No such person." << endl;
    }
    else
    {
        cout << "Found the person." << endl;
        int index = searchPerson(abs, name);
        for (int i = index; i < abs->mSize; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->mSize--;
        cout << "Delete Successful!" << endl;
    }

    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

void findPerson(struct AddressBooks *abs)
{
    cout << "Please the person name that you wish to search." << endl;
    string name;
    cin >> name;

    int ret = searchPerson(abs, name);
    if (ret == -1)
    {
        cout << "No such person." << endl;
    }
    else
    {
        cout << "Name: " << abs->personArray[ret].mName << "\t";
        cout << "Gender: " << (abs->personArray[ret].mGender == 1 ? "Male" : "Female") << "\t";
        cout << "Age: " << abs->personArray[ret].mAge << "\t";
        cout << "Phone: " << abs->personArray[ret].mPhone << "\t";
        cout << "Address: " << abs->personArray[ret].mAddress << endl;
    }

    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

void modifyPerson(struct AddressBooks *abs)
{
    cout << "Please enter the user that you wish to modify." << endl;
    string name;
    cin >> name;

    int ret = searchPerson(abs, name);

    if (ret != -1)
    {
        string name;
        cout << "Please enter the user name" << endl;
        cin >> name;
        abs->personArray[ret].mName = name;

        int gender = 0;
        cout << "Please enter your gender" << endl;
        cout << "Enter 1 is for male" << endl;
        cout << "Enter 2 is for female" << endl;

        while (true)
        {
            cin >> gender;
            if (gender == 1 || gender == 2)
            {
                abs->personArray[ret].mGender = gender;
                break;
            }
            cout << "Please enter a valid gender" << endl;
        }

        int age;
        cout << "Please enter your age" << endl;
        cin >> age;
        abs->personArray[ret].mAge = age;

        string phone;
        cout << "Please enter your phone" << endl;
        cin >> phone;
        abs->personArray[ret].mPhone = phone;

        string address;
        cout << "Please enter your address" << endl;
        cin >> address;
        abs->personArray[ret].mAddress = address;

        cout << "Update successfully." << endl;
    }
    else
    {
        cout << "No such person." << endl;
    }
    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

void cleanPerson(struct AddressBooks *abs)
{
    int clear = 0;
    cout << "Are you confirm to remove all your contact list?" << endl;
    cout << "Enter 1 is for Yes" << endl;
    cout << "Enter 2 is for No" << endl;

    cin >> clear;
    
    if (clear == 1){
        abs->mSize = 0;
        cout << "Contact book has cleared." << endl;
    } else {
        cout << "You have selected not to remove all contact list."<< endl;
    }
    
    system("read -p 'Press Enter to continue...' var");
    system("clear");
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
            showPerson(&abs);
            break;
        case 3:
            deletePerson(&abs);
            break;
        case 4:
            findPerson(&abs);
            break;
        case 5:
            modifyPerson(&abs);
            break;
        case 6:
            cleanPerson(&abs);
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