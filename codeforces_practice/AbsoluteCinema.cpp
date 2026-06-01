#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n],b[n];
        long long maxA =0;
        long long sumB = 0;
        for(long long i=0;i<n;i++){
            cin >> a[i];
            
        }
        for(long long i=0;i<n;i++){
            cin >> b[i];
        }

        for(long long i = 0 ; i < n; i++){
            if(a[i]>b[i]){
                long long temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
            if(a[i]>maxA){
                maxA = a[i];
            }
            sumB+=b[i];
        }

        cout << maxA + sumB << endl;
    }
}