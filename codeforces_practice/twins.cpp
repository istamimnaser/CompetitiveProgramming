#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    int mySum = 0;
    int coins = 0;
    for (int value : a) {
        mySum += value;
        coins++;
        if (mySum > total - mySum) {
            break;
        }
    }

    cout << coins;
    return 0;
}
