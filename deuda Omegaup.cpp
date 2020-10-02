#include <iostream>
using namespace std;

unsigned int acum,x,i,debe,paga;
main(){
cin.tie(0);
ios_base::sync_with_stdio(0);

	cin>>debe>>paga;
	for(;i<paga;i++){
		cin>>x;
		acum+=x;
	}
	cout<<debe-acum;
}