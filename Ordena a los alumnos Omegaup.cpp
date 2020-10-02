#include <string.h>
#include <iostream>
using namespace std;
int n,act[0];

int main(){
cin>>n;
int act[n];
for(int i=0;i<n;i++){
	cin>>act[i];
}	


	int aux;
for(int i=1;i<n;i++){
	for(int j=0;j<n;j++){
		if(act[j]>act[i]){
			aux=act[i];
			act[i]=act[j];
			act[j]=aux;
		}
	}
}


for(int i=n-1;i>=0;i--){
	cout<<act[i]<<endl;
}


return 0;	
}