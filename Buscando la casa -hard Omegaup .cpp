#include <iostream>
using namespace std;

short matriz[1002][1002];
short filas,columnas,i,j;

main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin>>filas>>columnas;
	
	for(i=1;i<=filas;i++){
		for(j=1;j<=columnas;j++){
			cin>>matriz[i][j];
		}
	}
	
	
	for(i=1;i<=filas;i++){
		for(j=1;j<=columnas;j++){
		if(matriz[i][j]>matriz[i+1][j]){
		if(matriz[i][j]>matriz[i][j+1]){
			if(matriz[i][j]>matriz[i+1][j+1]){
				if(matriz[i][j]>matriz[i-1][j]){
					if(matriz[i][j]>matriz[i][j-1]){
						if(matriz[i][j]>matriz[i-1][j-1]){
							if(matriz[i][j]>matriz[i-1][j+1]){
								if(matriz[i][j]>matriz[i+1][j-1]){
										cout<<i<<" "<<j<<"\n";
									}	
	}
	}	
	}
	}		
	}
	}
	}
		}
	}
	
	
}