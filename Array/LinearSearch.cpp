#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int key = 5;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found) cout << "Found";
    else cout << "Not Found";

    return 0;
}