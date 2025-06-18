#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        if(N<4){
            cout<<"1"<<endl;
        }else if(N<9){
            cout<<"4"<<endl;
        }else if(N<16){
            cout<<"9"<<endl;
        }else if(N<25){
            cout<<"16"<<endl;
        }else if(N<36){
            cout<<"25"<<endl;
        }else if(N<49){
            cout<<"36"<<endl;
        }else if(N<64){
            cout<<"49"<<endl;
        }else if(N<81){
            cout<<"64"<<endl;
        }else if(N<100){
            cout<<"81"<<endl;
        }else if(N==100){
            cout<<"100"<<endl;
        }
    }
}