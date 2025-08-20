#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        vector <int> v(N);
        for(int i=0;i<N;i++){
            cin>>v[i];
        }

        int count =1;
        for(int i=1;i<N;i++){
            if(v[i] % 2 != v[i-1] % 2){
                count++;
            }else{
                v[i]=v[i-1];
            }
        }
        cout<<count<<endl;
        
    }
}