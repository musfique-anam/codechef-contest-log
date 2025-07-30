#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int count=0;
        for(int i=0;i<n;i++){
            if(v[i] >= x && v[i] <= y){
                count++;
            }
        }
        cout<<count<<endl;
    }
}