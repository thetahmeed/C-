#include <iostream>
using namespace std;

int main()
{
    char userInput;

    cout << "Enter any alphabet: ";
    cin >> userInput;

    switch (userInput)
    {
    case 'a':
        cout << "This is a vowel";
        break;
    case 'e':
        cout << "This is a vowel";
        break;
    case 'i':
        cout << "This is a vowel";
        break;
    case 'o':
        cout << "This is a vowel";
        break;
    case 'u':
        cout << "This is a vowel";
        break;

    default:
    cout << "This is a consonant";
        break;
    }

    return 0;
}