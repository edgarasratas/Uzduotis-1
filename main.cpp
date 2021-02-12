#include <iostream>

using namespace std;

int main()
{
    char frame = '*';
    string greeting = "Sveikas, ";
    string name;

    //asks the user to input his name
    cout << "Iveskite savo varda:\n";
    cin >> name;
    cout << endl;

    greeting += name;

    //prints the first line
    for (int i = 0; i < greeting.length() + 5; i++)
    {
        cout << frame;
    }

    cout << endl;

    //prints the second line
    for (int i = 1; i <= greeting.length() + 5; i++)
    {
        if ((i == 1) || (i == greeting.length() + 5)) {
            cout << frame;
        }
        else {
            cout << ' ';
        }
    }

    cout << endl;

    //prints the third line
    cout << "* " << greeting << "! *\n";

    //prints the fourth line
    for (int i = 1; i <= greeting.length() + 5; i++)
    {
        if ((i == 1) || (i == greeting.length() + 5)) {
            cout << frame;
        }
        else {
            cout << ' ';
        }
    }

    cout << endl;

    //prints the fifth line
    for (int i = 0; i < greeting.length() + 5; i++)
    {
        cout << frame;
    }
}