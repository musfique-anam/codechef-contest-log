#include<bits/stdc++.h>
using namespace std;
int main(){
    int L,R,s;
    cin>>L>>R;
    if(L>R){
        s=L-R;
        cout<<s<<endl;
    }else if(R>L){
        s=R-L;
        cout<<s<<endl;
    }else if(L==R){
        cout<<"0"<<endl;
    }
}