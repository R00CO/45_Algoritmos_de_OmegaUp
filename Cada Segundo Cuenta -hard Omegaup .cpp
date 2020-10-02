#include <string.h>
#include <iostream>
using namespace std;
int main(){
unsigned int X,Y;

cin>>X>>Y;


if(X-Y==1){
	cout<<"ATRASAR 1 SEGUNDO";
	goto salto1;
}
else if(Y-X==1){
	cout<<"ADELANTAR 1 SEGUNDO";
	goto salto2;
}

if(X>Y){
	cout<<"ATRASAR "<<X-Y<<" SEGUNDOS";
}
else if(X==Y){
}
else{
	cout<<"ADELANTAR "<<Y-X<<" SEGUNDOS";
}
salto1:
salto2:
return 0;	
}