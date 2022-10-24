#include <iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    static int count; // Static member
    Test()
    {
        a = 10;
        b = 10;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Test::count = 0;

// Static members belongs to a class not object, so it is accessible by all objects and created only once
// It can be accessible all objects of the class and the value remain same for all objects
int main()

{
    Test T1;
    Test T2;

    cout << T1.count << endl;
    cout << T2.count << endl;
    cout << Test::count << endl; // Can be accessed like this also i.e. Without any object

    cout << T1.getCount() << endl;
    cout << Test::getCount() << endl;

    return 0;
}