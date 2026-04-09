#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
   while (true)
   {
    cout << "Enter number of elements in array: ";
    cin >> n;
    if (n <= 20)
       break;
    else
       cout << "\nArray can have maximum 20 elements.\n";
   }

    cout << "\n-------------------\n";
    cout << "Enter array elements\n";
    cout << "-------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
   
}