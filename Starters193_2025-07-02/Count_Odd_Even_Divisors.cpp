#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,odd,even;
    cin>>t;
    while(t--){
        cin>>n;
        odd=0,even=0;
        
        for(i=1;i<=n;i++){
            if(n%i == 0){
                int z=i;
                if(z % 2 == 0){
                   even++; 
                }else{
                    odd++;
                }
            }
        }
        cout<<odd<<" "<<even<<endl;
    }
}