#include <iostream>
#include "quicksort.hpp"

using std::cout;
using std::endl;

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, 0, n-1);
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}