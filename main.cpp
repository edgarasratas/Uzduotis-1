#include <iostream>
#include <string>

using namespace std;

bool endsWith(string str, string ending);

int main()
{
    char frame = '*';
    string greeting = "Sveikas, ";
    string name;
    int height, length;

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

    greeting += name + "!";

    cout << "Iveskite remus (min 5x5):\n";
    cout << "Aukstis: ";
    cin >> height;
    cout << "Ilgis: ";
    cin >> length;
    if (height < 5 || length < 5) {
        cout << "\nKlaida. Bandykite dar karta";
        return 0;
    }

    while (length < greeting.length() + 4)
    {
        cout << "Jusu pasveikinimas netelpa i remus. Ilgis turi buti " << greeting.length() + 4 << ". Pabandykite ilgi ivesti is naujo." << endl;
        cout << "Ilgis: ";
        cin >> length;
    }

    //prints the first line
    for (int i = 0; i < length; i++)
    {
        cout << frame;
    }

    cout << endl;

    for (int i = 0; i < height; i++)
    {
        cout << frame;
        if (i == height / 2)
        {
            for (int j = 0; j < length - (greeting.length() + 2); j++)
            {
                for (int k = 0; k < (length - (greeting.length() + 2)) / 2; k++)
                {
                    cout << " ";
                    break;
                }

                if (j == ((length - (greeting.length() + 2)) / 2) - 1)
                {
                    cout << greeting;
                }
            }
        }
        else
        {
            for (int j = 0; j < length - 2; j++)
            {
                cout << " ";
            }
        }
        cout << frame << endl;
    }

    for (int i = 0; i < length; i++)
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