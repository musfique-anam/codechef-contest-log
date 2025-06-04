#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,N,C,mul,ans;
    cin>>t;
    while(t--){
        vector <int> A;
        vector <int> B;

        cin>>N>>C;

        for(int i=0;i<N;i++){
            cin>>a;
            A.push_back(a);
        }
        for(int i=0;i<N;i++){
            cin>>b;
            B.push_back(b);
        }

        int sumA=accumulate(A.begin(),A.end(),0);

        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());

        int sumB=accumulate(B.begin(),B.end(),0);

        int X,Y;
        X=A.size();
        Y=sumB;

        mul=C*X-Y;

        if(mul<0){
            ans=sumB-sumA;
            cout<<ans<<endl;
        }else{
            cout<<mul<<endl;
        }

    }
}