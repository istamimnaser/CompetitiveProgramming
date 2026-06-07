#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

   
    sort(a.rbegin(), a.rend());

    
    bool flag = true;
    for (int i = 0; i < n - 2; ++i) {
      
        if (a[i] % a[i+1] != a[i+2]) {
            flag = false;
            break;
        }
    }

    
    if (flag) {
       
        cout << a[0] << " " << a[1] << "\n";
    } else {
        cout << "-1\n";
    }
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}