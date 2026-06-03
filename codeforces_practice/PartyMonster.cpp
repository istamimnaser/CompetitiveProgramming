#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char s;
        int left = 0, right = 0;
        cin>>n;
        for(int i = 0 ; i < n; i++){
            cin>>s;

            if(s == '('){
                left++;

            }
            else if( s == ')'){
                right++;
            }
        }

        if(left == right){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}