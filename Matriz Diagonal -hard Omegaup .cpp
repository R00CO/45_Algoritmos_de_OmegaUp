#include <bits/stdc++.h>
using namespace std;
main(){
	int a,f,c;
	bool vof=true;
	cin>>a;
	int matriz[a][a];
	for(f=0;f<a;f++){
		for(c=0;c<a;c++){
			cin>>matriz[f][c];
		}
	}
	
	for(f=0;f<a-1;f++){
		for(c=0;c<a-1;c++){
			if(f==c){
				if(matriz[f][c]==matriz[f+1][c+1]){
				}
			
			else{
				vof=false;
				break;
			}
			}
		}
	}
	if(vof){
		cout<<"SI";
	}
	else{
		cout<<"NO";
	}
}