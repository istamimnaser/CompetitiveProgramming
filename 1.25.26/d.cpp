#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<long long> pb(n+1,0);
        for(int i=1;i<=n;i++){
            pb[i] = pb[i-1] + b[i-1];
        }
        sort(a.begin(),a.end());
        long long ans = 0;
        for(int i=0;i<n;i++){
            long long x = a[i];
            long long cnt = n - i;
            // binary search for max k where pb[k] <= cnt
            int low = 0, high = n;
            while(low < high){
                int mid = (low + high + 1) / 2;
                if(pb[mid] <= cnt){
                    low = mid;
                } else {
                    high = mid - 1;
                }
            }
            long long k = low;
            ans = max(ans, x * k);
        }
        cout << ans << endl;
    }
    return 0;
}