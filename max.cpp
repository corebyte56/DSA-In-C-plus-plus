#include <iostream>
using namespace std;

int main() {
     int largest = INT16_MIN;
     int size;
     cout << "Enter the size of the array: " << endl;
     cin >> size;
     int arr[size];

     cout << "Enter the elements of the array: " << endl;
     for (int i=0; i<size; i++) {
          cin >> arr[i];
     }

     for (int i=0; i<size; i++) {
          largest = max(largest, arr[i]);
     }

     cout << ".....Largest element of the array is : " << largest << "........" << endl;

     return 0;
}
