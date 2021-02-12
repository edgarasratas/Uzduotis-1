#include <iostream>
#include <string>

using namespace std;

bool endsWith(string str, string ending);

int main()
{
    char frame = '*';
    string greeting = "Sveikas, ";
    string name;

    //asks the user to input his name
    cout << "Iveskite savo varda:\n";
    cin >> name;
    cout << endl;

    if (endsWith(name, "s")) {
        greeting = "Sveikas, ";
    }
    else if (endsWith(name, "a")) {
        greeting = "Sveika, ";
    }

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


bool endsWith(string str, string ending) {
    if (str.length() >= ending.length()) {
        return (0 == str.compare(str.length() - ending.length(), ending.length(), ending));
    }
    else {
        return false;
    }
}