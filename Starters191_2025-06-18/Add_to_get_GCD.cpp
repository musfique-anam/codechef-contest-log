#include<bits/stdc++.h>
using namespace std;

int gcd(int X,int Y,int G,int count){
    X++;
    Y++;
    count=count+2;
    G=__gcd(X,Y);
    if(G%X == 0 && G%Y == 0){
        gcd(X,Y,G,count);
    }
}

int main(){
    int t,x,y,G,count=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        G=__gcd(x,y);
        if(G != 1){
            if(G%x == 0 && G%y == 0){
                cout<<"0";
            }
        }else{
            gcd(x,y,G,count);

        }
    }
}