#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;

        if(a==1 && b==0){
            cout<<"Yes"<<endl;
        }else if(a>b){
            int d=a-b;
            if(d == 1){
                cout<<"No"<<endl;
            }
        }else if(a == 0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
}