#include <bits/stdc++.h>
using namespace std;

int main(){
int v[4],v2[3];
for(int i=0;i<3;i++){
	cin>>v[i];
}
sort(v,v+3);
for(int i=0;i<3;i++){
	cin>>v2[i];
}
sort(v2,v2+3);
for(int i=0;i<3;i++){
	if(v[i]<=v2[i]){
		if(i==2){
		cout<<"1";
		}
	}
	else{
		cout<<"0";
		goto salto;
	}
}
salto:
return 0;
}