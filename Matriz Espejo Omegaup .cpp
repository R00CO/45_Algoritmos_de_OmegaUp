#include<bits/stdc++.h>
using namespace std;
int main(){
	int columna,fila,i,k;
	cin>>fila>>columna;
	int matriz[fila][columna];
	for(i=0;i<fila;i++){
		for(k=0;k<columna;k++){	
			cin>>matriz[i][k];
		}
	}

	for(i=0;i<fila;i++){
		for(k=columna-1;k>=0;k--){	
			cout<<matriz[i][k]<<" ";
		}
		cout<<"\n";
	}
return 0;
}