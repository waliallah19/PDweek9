#include <iostream>
using namespace std;
main()
{

    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> arr[idx];
    }
    int n;
    cout << "How many times you want to perform even-odd transformation: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int idx = 0; idx < size; idx++)
        {
            if (arr[idx] % 2 == 0)
            {
                arr[idx] = arr[idx] - 2;
            }
            else
            {
                arr[idx] = arr[idx] + 2;
            }
        }
    }
    cout<<"[";
    for (int idx = 0; idx < size; idx++)
    {
        cout<<arr[idx];
        if(idx != size -1)
            cout<<',';
    }
    cout<<"]";    
}