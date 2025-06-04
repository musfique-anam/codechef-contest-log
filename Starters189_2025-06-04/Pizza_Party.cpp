#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,pizza,sum=0;
    float pizzaDiv;
    cin>>a>>b;

    a=a+1;
    a=a*4;
    b=b*3;

    sum=a+b;
    pizzaDiv=sum%8;
    pizza=sum/8;

    if(pizzaDiv > 0){
        pizza=pizza+1;
    }
    
    cout<<pizza<<endl;
}