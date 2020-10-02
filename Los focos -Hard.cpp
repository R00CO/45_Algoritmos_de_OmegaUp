#include <bits/stdc++.h>
using namespace std;
main(){
 long long focos,i;
	cin>>focos;
	for(i=1;i<=focos;i++){
		if(i*i>focos){
			break;
		}
		else{
			cout<<i*i<<endl;
		}
	}

}