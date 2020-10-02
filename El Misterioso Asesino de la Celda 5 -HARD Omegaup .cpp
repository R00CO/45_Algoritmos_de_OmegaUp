#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,j,
	fil,col,n_ala,
	po_x,po_y,x2,y2,cont=0;
	
	bool ban1,ban2,ban3,ban4;
	
	cin>>fil>>col>>n_ala;
	int matriz[fil][col];
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			matriz[i][j]=0;
		}
	}
	for(i=0;i<n_ala;i++){
		cin>>po_x>>po_y;
		matriz[po_x-1][po_y-1]=1;
	}
	
	
	
	
	for(i=0;i<fil-1;i++){
		for(j=0;j<col-1;j++){
			x2=i+1;
			y2=j+1;
			ban1=matriz[i][j]==0;
				ban2=matriz[x2][j]==0;
				ban3=matriz[i][y2]==0;
				ban4=matriz[x2][y2]==0;
				if(ban2==1&&ban3==1&&ban1==1&&ban4==1){
					cont++;
			}    
		}
	}
	cout<<cont;
	//fin del programa
}