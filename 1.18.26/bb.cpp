#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
    cin >> n;
        vector<int> a(n);
    
    int max_val = -1;
    int max_idx = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
       
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
    }

    
    swap(a[0], a[max_idx]);

    
    long long total_sum = 0;
    int current_prefix_max = 0;
    for (int i = 0; i < n; i++) {
        current_prefix_max = max(current_prefix_max, a[i]);
        total_sum += current_prefix_max;
    }

    cout << total_sum << endl;
}



    }


