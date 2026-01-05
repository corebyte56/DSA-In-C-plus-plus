#include <iostream>
using namespace std;

int main() {
     int smallest = INT16_MAX;
     int size;
     cout << "Enter the size of the array: " << endl;
     cin >> size;
     int arr[size];

     cout << "Enter the elements of the array: " << endl;
     for (int i=0; i<size; i++) {
          cin >> arr[i];
     }

     for (int i=0; i<size; i++) {
          smallest = min(smallest, arr[i]);
     }

     cout << ".....Smallest element of the array is : " << smallest << "........" << endl;

     return 0;
}
