#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,s;
    cin>>t;
    while(t--){
        cin>>n;
        vector <int> A;
        for(int i=0;i<n;i++){
            cin>>a;
            A.push_back(a);
        }

        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        s=A.size();
        if(s<2){
            cout<<"-1"<<endl;
        }else{
            int z=s%2;
            if(z == 0){
                cout<<s<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }
    }
}