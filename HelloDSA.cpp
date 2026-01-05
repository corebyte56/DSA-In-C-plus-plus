#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int min_diff = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        min_diff = min(min_diff, a[i] - a[i-1]);
    }

    cout << min_diff << endl;

    return 0;
}