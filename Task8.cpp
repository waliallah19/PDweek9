#include <iostream>
using namespace std;
main()
{
    int size, time=0;
    cout << "Enter total numbers of colors cols: ";
    cin >> size;
    string color[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter color: ";
        cin >> color[idx];
    }
         time = size*2;
    for (int idx = 0; idx < size; idx++)
    {
        if(color[idx]!= color[idx+1])
        time = time + 1;
    }
        cout << "Total time: " << time-1;
}
