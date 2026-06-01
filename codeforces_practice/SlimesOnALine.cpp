#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int min_val = 2000; 
        int max_val = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min_val){
                min_val = a[i];
            }
            if(a[i]>max_val){
                max_val = a[i];
            }
        }
        cout<<(max_val-min_val+1)/2<<endl;
    }
}