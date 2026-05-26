#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool all_upper_except_first = true;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            all_upper_except_first = false;
            break;
        }
    }

    if (all_upper_except_first) {
       
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32; 
            } else {
                s[i] = s[i] + 32; 
            }
        }
    }

    cout << s << endl;
    return 0;
}