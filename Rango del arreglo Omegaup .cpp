#include <iostream>
using namespace std;
int main(){

int vect[10],menor,mayor=0;
for(int i=0;i<10;i++){
	
	cin>>vect[i];
		
}
menor=vect[1];
for(int i=0;i<10;i++){

for(int j=0;j<10;j++){
	if(menor>vect[j]){
		menor=vect[j];
	}
}	

if(mayor<vect[i]){
	mayor=vect[i];
	
}	
}

cout<<menor<<" "<<mayor<<" "<<mayor-menor;
return 0;
}