#include <bits/stdc++.h>
using namespace std;
int main(void){
	int limit,i,dato,mayor=0;
	cin>>limit;
	int vec[limit];
	for(i=0;i<limit;i++){
		cin>>vec[i];
		if(vec[i]>mayor){
			mayor=vec[i];
		}
	}
	for(i=0,dato=0;i<limit;i++){
		if(vec[i]==mayor){
			dato++;
		}
	}
	cout<<dato;
}