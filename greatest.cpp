#include <bits/stdc++.h>
using namespace std;

int main(){

	int a,b,c;

	cin>>a>>b>>c;

	int Greatest = (a + b + abs(a - b)) / 2;
	 Greatest=(Greatest+c+abs(Greatest-c))/2;

	 cout<<Greatest<<" eh o maior"<<endl;
}