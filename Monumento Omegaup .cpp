#include <iostream>
using namespace std;
main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	unsigned long int i,numero,c,ant=0,act=1;
	
	cin>>numero;
	for(i=0;i<numero;i++){
		
		c=(ant+act)%1000000;
		
		ant=act;
		act=c;
	}
	cout<<c;
}