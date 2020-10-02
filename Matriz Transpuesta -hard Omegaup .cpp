#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned fila,columna,i,k;
	cin>>fila>>columna;
	int matriz[fila][columna];
	for(i=0;i<fila;i++){
		for(k=0;k<columna;k++){
			cin>>matriz[i][k];
		}
	}
	for(i=0;i<columna;i++){
		for(k=0;k<fila;k++){
		cout<<matriz[k][i]<<" ";
		}
		cout<<endl;
	}

return 0;
}