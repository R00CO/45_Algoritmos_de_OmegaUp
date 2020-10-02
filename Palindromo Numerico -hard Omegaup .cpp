#include <bits/stdc++.h>
using namespace std;
int main(void){
	int limit,i,j;
	bool ban=false;
	cin>>limit;
	int vec[limit];
	for(i=0;i<limit;i++){
		cin>>vec[i];
		if(vec[i]==0){
			ban=true;
		}
	}
	if(ban){
		goto saltoban;
	}
if(limit%2==0){	
	for(i=0,j=limit-1;i<limit/2;i++,j--){
		if(vec[i]!=vec[j]){
			ban=true;
			goto sal;
		}
	}
}
else{
	for(i=0,j=limit-1;i<limit/2;i++,j--){
		if(vec[i]!=vec[j]){
			ban=true;
			goto sal2;
		}
		
	}
}
saltoban:
sal:
sal2:
	if(ban){
		cout<<"NO";
	}
	else{
		cout<<"SI";
	}
}