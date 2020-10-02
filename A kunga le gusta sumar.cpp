#include<iostream>
using namespace std;

main(){
	
	int acu=0,j,i=0,vec[9999];
	
	while(true){
		
		cin>>vec[i];
		if(vec[i]==0) break;
		++i;
	}
	
	for(j=0;j<i;j++){
		for(int k=1;k<=vec[j];k++){
			acu+=k;
		}
		cout<<acu<<endl;
		acu=0;
	}
}