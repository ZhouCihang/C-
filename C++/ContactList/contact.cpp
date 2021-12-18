#include <iostream>
using namespace std;

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

int main()
{

    int selected;

    while (true)
    {
        showMenu();
        cin >> selected;
        switch (selected)
        {
        case 1:
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