#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a;
        cin>>n>>a;
        int v[n];
  int left = 0, right = 0;
for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] < a){        // Strictly less than
        left++;
    } else if(v[i] > a){ // Strictly greater than
        right++;
    }
}

if(left > right){
    cout << a - 1 << endl; // Go left if there are more marbles on the left
} else {
    cout << a + 1 << endl; // Go right if there are more (or equal) marbles on the right
}


    }
}