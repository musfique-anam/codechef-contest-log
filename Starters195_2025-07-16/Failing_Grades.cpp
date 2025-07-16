#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,count,z,m;
    cin>>t;
    while(t--){
        count=0,z=0;
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }


        int av=40;
        z=v[0];

        for(int i=0;i<n;i++){
            int w=i+1;
            x=z/w;
            if(av > x){
                count++;
            }
            z=v[i+1]+z;
        }

        if(count>0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
}