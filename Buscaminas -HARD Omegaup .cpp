// SI ES -- 1 -- SE HACE VERDADERO Y SI ES -- 0 -- ES FALSO

#include<iostream>
using namespace std; 
int matriz[300][300],filas,columnas,j,i;


void sumaM(){
	if(i-1>=0&&j-1>=0){
	matriz[i-1][j-1]+=1;}
	matriz[i+1][j+1]+=1;
	if(i-1>=0){
	matriz[i-1][j+1]+=1;
	}
	if(j-1>=0){
	matriz[i+1][j-1]+=1;
	}
	matriz[i+1][j]+=1;
	if(i-1>=0){
	matriz[i-1][j]+=1;
	}
	matriz[i][j+1]+=1;
	if(j-1>=0){
	matriz[i][j-1]+=1;
	}
	matriz[i][j]+=1;
}

int main() { 
cin>>filas;
cout<<" ";
cin>>columnas;
bool matrizbin[filas][columnas];
for(i=0;i<filas;i++){       // pediendo los valores----------------------------
	for(j=0;j<columnas;j++){
		cin>>matrizbin[i][j];
		if(matrizbin[i][j]){
			sumaM();
		}
	}
}
for(i=0;i<filas;i++){
	for(j=0;j<columnas;j++){
	cout<<matriz[i][j];
	cout<<" ";
	}
	cout<<endl;

}

return 0; 
}