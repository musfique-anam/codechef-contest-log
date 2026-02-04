#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,current=0,max=0;
        cin >>N;
        vector<int> v(N);

        for(int i=0;i<N;i++){
            cin>>v[i];
        }

        for(int i=0;i<N;i++){
            if(v[i] > 0){
                current+=1;
                if(current>max){
                    max=current;
                }
            }else if(v[i] == 0){
                current=0;
            }
        }


        cout<<max<<endl;
    }

}