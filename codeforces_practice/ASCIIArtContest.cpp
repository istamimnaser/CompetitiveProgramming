#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int g[3];
   for(int i = 0; i < 3; i++){
        cin>>g[i];
    }

    sort(g, g + 3);

    if(g[2] - g[0] >= 10){
        cout<<"check again"<<endl;
    }
    else{

        
        cout<<"final "<<g[1]<<endl;
    }
}