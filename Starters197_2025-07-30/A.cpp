#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<15){
        cout<<15-x;
    }else if(x>15){
        cout<<"-1";
    }else{
        cout<<"0";
    }
}