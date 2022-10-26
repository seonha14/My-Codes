#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream objectName("Sample.txt", ios::app); // ios::trunc for truncating previous content or leave blank

    objectName << "Student " << endl;
    objectName << 35 << endl;

    objectName.close();
}