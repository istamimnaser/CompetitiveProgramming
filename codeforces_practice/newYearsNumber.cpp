#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int i = n%2020;
        if (i <= n/2020){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}