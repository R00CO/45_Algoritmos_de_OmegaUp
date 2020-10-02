#include<iostream>
#include <iostream>

using namespace std;
int main(){
	  int i,cali;
	  float acum=0,prom,c;
	  cin>>prom>>cali;
	  for(i=0;i<cali;i++){
	  	cin>>c;
	  	acum+=c;
	  }
	acum/=cali;
	if(acum>prom){
		cout<<"Presume";
	}
	else{
		cout<<"Ladra";
	}
}