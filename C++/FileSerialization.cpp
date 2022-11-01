#include <iostream>
#include <fstream>
using namespace std;
// Serialization is a state of Storing and Retrieving the state of an object

class Student
{
public:
    string name;
    int roll;
    string branch;

    // operator overloading
    // For output
    friend ofstream &operator<<(ofstream &object, Student &data);

    // For input
    friend ifstream &operator>>(ifstream &object, Student &data);
};
ofstream &operator<<(ofstream &object, Student &data)
{
    object << data.name << endl;
    object << data.roll << endl;
    object << data.branch << endl;

    return object;
}

ifstream &operator>>(ifstream &object, Student &data)
{
    object >> data.name >> data.name >> data.branch;
    return object;
}

int main()
{
    Student s1; // Object creation
    s1.name = "Azeem";
    s1.roll = 112;
    s1.branch = "CSE Core";

    ofstream outputFileVar;
    outputFileVar.open("Student.txt", ios::trunc);

    outputFileVar << s1;   // Moving data from object "s1" to file pointer "state" using overloaded operator
                           // The above line says take output from s1 and show it in state (same as cout<<output)
    outputFileVar.close(); // closing file
    //  For reading ;
    Student s1clone;
    ifstream inputFileVar;

    inputFileVar.open("Student.txt");

    inputFileVar >> s1clone; // Take input from file and inject it in object (same as cin>>input)

    cout << s1.name << endl
         << s1.roll << endl
         << s1.branch << endl;

    inputFileVar.close();
    return 0;
}