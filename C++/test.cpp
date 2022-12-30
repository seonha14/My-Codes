#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int k;
    if (nums.size() > 0)
        k = 1;
    else
        k = nums.size();

    for (int i = 1, j = 1; j < nums.size();)
    {
        if (nums[j] != nums[j - 1])
        {
            nums[i] = nums[j];
            i++;
            j++;
            k++;
        }
        else
            j++;
    }

    return k;
}
// int removeDuplicates(vector<int> &nums)
// {
//     int k = nums.size();
//     for (int i = 0; i < k - 1; i++)
//     {
//         if (nums[i] == nums[i + 1])
//         {
//             while (nums[i] == nums[i + 1])
//             {
//                 k--;
//                 int j;
//                for (j = i; j < nums.size() - 1; j++)
//                 {
//                     nums[j] = nums[j + 1];
//                 }
//                 nums[j] = -1 * nums[j - 1];
//             }
//         }
//     }
//     return k;
// }

int main()
{
    vector<int> array;
    array.push_back(0);
    array.push_back(0);
    array.push_back(1);
    array.push_back(1);
    array.push_back(1);
    array.push_back(2);
    array.push_back(2);
    array.push_back(3);
    array.push_back(3);
    array.push_back(4);

    cout << "initial array :" << endl;
    for (auto x : array)
        cout << x << " ";
    cout << endl;

    cout << "Final array :" << endl;
    int k = removeDuplicates(array);
    for (int i = 0; i < k; i++)
        cout << array[i] << " ";
    cout << endl;
    // cout << "Final array :" << endl;

    // for (int i = 0; i < array.size(); i++)
    //     cout << array[i] << " ";
    // cout << endl;
    return 0;
}