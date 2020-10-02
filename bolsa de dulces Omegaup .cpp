#include <iostream>
using namespace std;
int main(){
int ventas;
int cant,precio,cobro=0;
cin>>ventas;

for(int i=0;i<ventas;i++){
	
cin>>cant;
cin>>precio;
cobro+=cant*precio;
}
cout<<cobro;
return 0;	
}