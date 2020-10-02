#include <bits/stdc++.h>
using namespace std;
main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		
		if(pow(2,i)==a){
			cout<<i;
			break;
		}
	}

}