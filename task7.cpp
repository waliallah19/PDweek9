#include <iostream>
using namespace std;
main()
{
    string a, b;
    int l1, l2, count = 0;
    cout << "Enter 1st string: ";
    cin >> a;
    cout << "Enter 2nd string: ";
    cin >> b;
    l1 = a.length();
    l2 = b.length();
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (a[i] == b[j])
            {
                count++;
                b[j] = '.';
                break;
            }
        }
    }
    cout << count;
}