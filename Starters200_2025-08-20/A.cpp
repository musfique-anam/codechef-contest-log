#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X,Y;
    cin>>N>>X>>Y;
    int a=Y/X;
    int b=N/a;
    if(N%a != 0){
        cout<<b+1;
    }else{
        cout<<b;
    }
}