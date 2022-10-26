#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream objectName;
    objectName.open("Sample.txt");

    if (!objectName.is_open()) // Checking if file opened or not  OR simpley if(!object){}
        cout << "File does not exist" << endl;

    int x;
    string y;

    objectName >> y;
    objectName >> x;
    cout << x << " " << y << endl;

    if (objectName.eof())
    {
        cout << "End of file reached" << endl;
    }
    objectName.close();
}