#include <iostream>
using namespace std;
main()
{
    string moves[10] = {"Shimmy", "Shake", "Piroutte", "Slide", "BoxStep", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int a;
    string pin;
    int pini[4];
    cout << "Enter your pin: ";
    cin >> pin;
    for (int idx = 0; idx < 4; idx++)
    {
        if (pin[idx] == '0')
            pini[idx] = 0;
        else if (pin[idx] == '1')
            pini[idx] = 1;
        else if (pin[idx] == '2')
            pini[idx] = 2;
        else if (pin[idx] == '3')
            pini[idx] = 3;
        else if (pin[idx] == '4')
            pini[idx] = 4;
        else if (pin[idx] == '5')
            pini[idx] = 5;
        else if (pin[idx] == '6')
            pini[idx] = 6;
        else if (pin[idx] == '7')
            pini[idx] = 7;
        else if (pin[idx] == '8')
            pini[idx] = 8;
        else if (pin[idx] == '9')
            pini[idx] = 9;
        else
            pini[idx] = 10;
    }
    for (int idx = 0; idx < 4; idx++)
    {
        if (pini[idx] != 10)
        {
            cout << "\"";
            a = idx + pini[idx];
            if (a < 10)
            {
                cout << moves[a] << "\"";
                if (idx != 3)
                    cout << ",";
            }
            else
            {
                a=idx-1;
               cout << moves[a] << "\"";
                if (idx != 3)
                    cout << ",";
            }
        }
        else
        {
            cout<<endl << "Invalid Input!";
            break;
        }
    }
}