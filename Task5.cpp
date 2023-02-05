#include <iostream>
using namespace std;
main()
{

    string arr[4];
    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter elements: ";
        cin >> arr[idx];
    }
        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2]  == arr[3])
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
}