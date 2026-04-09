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
   
}