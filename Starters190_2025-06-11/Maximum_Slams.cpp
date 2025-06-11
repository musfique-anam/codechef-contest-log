#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    float a,b,c;
    cin>>X;
    if(X<25){
        a=25-X;
        b=a/4;
        c=ceil(b);
        cout<<c<<endl;
    }else{
        cout<<"0"<<endl;
    }
}