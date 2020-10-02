#include <iostream>
using namespace std;
int main(){	
long n=0,z=1,limite,i;
cin>>limite;
for(i=1;i<=limite;i++){
z+=n;
n+=3;
}	
cout<<z;
	
return 0;	
}