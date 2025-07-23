#include <bits/stdc++.h>
using namespace std;

int problem(int Eq,bool L,int C){

    if(L = 0 && Eq>0){
        C=C+1;
    }

    problem(Eq,L,C);
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int N,C,E=0,L=0;
        cin>>N>>C;

        vector<int> v(N);

        for(int i=0;i<N;i++){
            cin>>v[i];
        }

        bool less=false;
        int equal=0;

        for(int i=0;i<N;i++){
            if(v[i] < C){
                less=true;
                break;
            }
        }

        for(int i=0;i<N;i++){
            if(v[i] == C){
                equal=i;
                E=v[equal];
                break;
            }
        }

        problem(E,less,C);

    
    }

}
