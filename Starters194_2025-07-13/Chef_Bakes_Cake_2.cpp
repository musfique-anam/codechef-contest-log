#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d,n,x,y,count=0;
    cin>>t;
    while(t--){
        n;
        cin>>n;
        vector<int> A;
        vector<int> B;
        for(int i=0;i<n;i++){
            a;
            cin>>a;
            A.push_back(a);
        }
        for(int i=0;i<n;i++){
            b;
            cin>>b;
            B.push_back(b);
        }

        count=0;

        for(int i=0;i<n;i++){
            x=A[i];
            y=B[i];
            d=0;
            if(x>y){
                d=x-y;
            }
            count += d;
        }

        cout<<count<<endl;
    }
}