#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int array[n];
        int sum=0;
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>array[i];
            sum+=array[i];
        }

        if(sum==s){
            cout<<"YES"<<endl;
        }
        else {
            sum+=x;
            for(int i=0;sum<=s;i++){
                if(sum==s){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
                sum+=x;
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        }
      

        

    }
}