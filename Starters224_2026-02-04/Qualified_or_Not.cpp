#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,X,Y;
	cin>>N>>X>>Y;
	
	X=X*2;
	Y=Y*2;
	
	if(N >= X && N >= Y){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}

}