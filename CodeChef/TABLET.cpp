// Accepted in First Run
#include <iostream>
using namespace std;

struct Tab
{
    int w;
    int h;
    int price;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;

        Tab array[n];

        int max_area = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> array[i].w;
            cin >> array[i].h;
            cin >> array[i].price;

            int area = array[i].w * array[i].h;
            int price = array[i].price;

            if (area > max_area && price <= b)
            {
                max_area = area;
            }
        }

        if (max_area == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << max_area << endl;
        }
    }

    return 0;
}
