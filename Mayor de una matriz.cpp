#include <iostream>
using namespace std;
int main(){
	int fila,columna,mayor=0;
	
	cin>>fila>>columna;
	int matriz[fila][columna];
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
		cin>>matriz[i][j];
		if(matriz[i][j]>mayor){
			mayor=matriz[i][j];
		}
		
		}
		
	}
	
	cout<<mayor;
	
return 0;	
}