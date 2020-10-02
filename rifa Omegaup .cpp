#include <iostream>
using namespace std;

unsigned long i,longitud,acum;
main(){

cin>>longitud;
unsigned int vec[longitud];
while(i++<longitud){
	cin>>vec[i];
}
i=0;
while(i++<longitud){
	acum+=vec[i]+(vec[i]*((vec[i]-1)*.5));
}
cout<<acum;
}