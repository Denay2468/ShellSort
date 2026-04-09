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

void shellsort(){
    int temp,j;
    int pass = 0;
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            temp = arr[i];
            j = i;
            while (j >= gap && arr[j - gap] > temp)
            {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
            cout << "\nAfter pass " << pass + 1 << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }

        pass++;
    }
}