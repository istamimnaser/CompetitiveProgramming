#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> type6, type2, type3, type1;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
     
        if (x % 6 == 0) {
            type6.push_back(x);
        } else if (x % 2 == 0) {
            type2.push_back(x);
        } else if (x % 3 == 0) {
            type3.push_back(x);
        } else {
            type1.push_back(x);
        }
    }
    
  
    for (int x : type6) cout << x << " ";
    for (int x : type2) cout << x << " ";
    for (int x : type1) cout << x << " ";
    for (int x : type3) cout << x << " ";
    cout << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}