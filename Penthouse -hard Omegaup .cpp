#include <iostream>
using namespace std;
main(){
	int  i,a,bal=1,del=1;
	cin>>a;
	for(i=1;i<a;i++){// MARGENES DE MENOR DE A
	//cout<<"ciclo:   "<<i<<endl;
		
		bal=(bal*2)%987654321;
		//cout<<"valor de B:  "<<b<<endl;
		bal=(bal+del)%987654321;
	
		del=(del*2)%987654321;
		
		
	} 
	cout<<(bal*2)%987654321;
}