#include <iostream>
using namespace std;

int main()
{
    // Declaration
    string a; // Initialize an empty string
    string b = {"Hello"};
    string c{"Alpha"};                 // Without using assignment "=" operator
    string d{c};                       // Initialize same as given string;
    string e{"This is a sentence", 4}; // Initialize with given number of characters only
    string f(4, 'a');                  // Make number of copies and initialize [USING BRACKETS INSTEAD OF CURLY BRACES]
    string sample = {"this is a sample string containing some line of text."};

    string g{sample, 5, 8}; // start from sample 5 and take 8 characters

    string h{sample, 5}; // start from sample 5 upto end

    // Printing

    cout << a << endl;
    cout << b << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    return 0;
}