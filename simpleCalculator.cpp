#include <bits/stdc++.h>
using namespace std;

int main(){
	
	float sum=0.0;

	for(int i=0; i<2;i++){
		int a,b;
		float c;
	    cin>> a>>b>>c;
	    sum +=b*c;
	}

	

	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<sum<<endl;
}