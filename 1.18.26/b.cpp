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
            for(int j=count;j<1000000000-1;j++){

                if(isPerfectSquare(j)){
                    arra[i]=j;
                    count=j+1;
                    break;
                    
                }
            }

        }
        for(int i=0;i<n;i++){
            cout<<arra[i]<<" ";
        }
          cout<<endl;
    }
  
}