#include <iostream>
#include <algorithm> // for std::min

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long cost_all_individual = n * a;

        long long groups = n / 3;
        long long remainder = n % 3;

     
        long long cost_mixed = (groups * b) + (remainder * a);

        
        long long cost_all_groups = (groups + 1) * b;

      
        long long ans;
        if (remainder == 0) {
            ans = min(cost_all_individual, groups * b);
        } else {
            ans = min({cost_all_individual, cost_mixed, cost_all_groups});
        }

        cout << ans << "\n";
    }
    
    return 0;
}