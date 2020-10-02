#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
// procesos de caracteres


string palabra;


//procesos de numeros
int x;

cin>>x;
cin>>palabra;
if(x>10){

cout<<palabra[0]<<x-2<<palabra[x-1];
}
else{
	cout<<palabra;
}


return 0;
}