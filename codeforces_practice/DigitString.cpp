#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int pref2 = 0;
        int suf = 0;
        for(char x : n){
            if(x == '1' || x=='3'){
                suf++;
            }
        }

        int ans = pref2 + suf;

        for(char x: n){
            if(x == '2'){
                pref2++;
            }
            else if(x == '1' || x=='3'){
                suf--;
            }

            ans = max(ans, pref2 + suf);
        }
        cout<<n.length()-ans<<endl;
    }
}