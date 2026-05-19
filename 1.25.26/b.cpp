#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arra(n);
        vector<int> arrb(n+1);
        for(int i=0;i<n;i++){
            cin>>arra[i];
            arrb[arra[i]]=i;
        }


        for(int i=0;i<=n;i++){
            int target=n-i;

            if(arra[i] != target){
                int j = arrb[target];

                int left=i;
                int right=j;
                while(left<right){
                    swap(arra[left],arra[right]);
                    left++;
                    right--;
                }
                break;
            }
    }
    for(int i=0;i<n;i++){
        cout<<arra[i]<<" ";
}
    cout<<endl;
    }
}