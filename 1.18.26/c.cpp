#include<iostream>
#include<vector>
using namespace std; 

struct Operation {
    int b;
    long long c;
};

int main(){
    int n, m;
    long long h;
    cin >> n >> m >> h;

    vector<long long> a_orig(n + 1);
    vector<long long> a_curr(n + 1);
    vector<int> last_modified(n + 1, -1); // Tracks which op last touched this index

    for (int i = 1; i <= n; i++) {
        cin >> a_orig[i];
        a_curr[i] = a_orig[i];
    }

    vector<Operation> ops(m);
    int last_crash = -1;

    for (int i = 0; i < m; i++) {
        cin >> ops[i].b >> ops[i].c;
        int idx = ops[i].b;

        // If this element hasn't been touched since the last crash, 
        // it should have been reset to its original value.
        if (last_modified[idx] < last_crash) {
            a_curr[idx] = a_orig[idx];
        }

        a_curr[idx] += ops[i].c;
        last_modified[idx] = i;

        // If it exceeds h, the computer crashes.
        // We update the last_crash index to 'i'.
        if (a_curr[idx] > h) {
            last_crash = i;
        }
    }

    // Final Pass: Any operation at or before last_crash is ignored.
    // Start fresh from original values.
    vector<long long> result = a_orig;
    for (int i = last_crash + 1; i < m; i++) {
        result[ops[i].b] += ops[i].c;
    }

    for (int i = 1; i <= n; i++) {
        cout << result[i] << (i == n ? "" : " ");
    }
    cout << endl;
}



