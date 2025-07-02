#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,b,s;
    cin>>l>>b>>s;
    int AR=l*b;
    int AS=pow(s,2);
    if(AR == AS){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}