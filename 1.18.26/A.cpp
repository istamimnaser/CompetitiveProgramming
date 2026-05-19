#include<iostream>
#include<cmath>
using namespace std;    

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arra[n];
        int count=1;
        for(int i=0;i<n;i++){
            for(int j=count;j<n;j++){

                if(isPerfectSquare(j)){
                    arra[i]=j;
                    break;
                }
            }

        }
        for(int i=0;i<n;i++){
            cout<<arra[i]<<" ";
        }
    }
}