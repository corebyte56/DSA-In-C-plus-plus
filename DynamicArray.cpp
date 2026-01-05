#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    for(int num : nums)
        cout << num << " ";
}