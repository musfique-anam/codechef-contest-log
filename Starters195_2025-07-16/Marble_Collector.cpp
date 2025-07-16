#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        vector<int> v;
        for(int i=0;i<N;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        unordered_set<int> s;
        for(int i=0;i<N;i++){
            s.insert(v[i]);
        }
        int d=s.size();

        int x=M-d;

        cout<<x<<endl;
    }
}