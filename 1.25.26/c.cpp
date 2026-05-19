#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>res(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        for(int i = 0 ; i < n; i++){
            res[i] = max(a[i],b[i]);
        }

        for(int i = n - 2; i >= 0;i--){
            res[i] = max(res[i], res[i+1]);
        }
        vector<long long> sum(n+1,0);
        for(int i = 1; i <= n; i++){
            sum[i] = sum[i-1] + res[i-1];
        }

        for(int iq=0;iq<q;iq++){
            int l,r;
            cin>>l>>r;
            l--; r--;
            long long result = sum[r+1] - sum[l];
            cout<<result<<" ";
        }
    cout<<endl;
    }
    return 0;
}