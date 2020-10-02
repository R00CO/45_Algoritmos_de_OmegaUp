#include <bits/stdc++.h>
using namespace std;
main(){
	int a,n,mayor=0,ind;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>n;
		if(mayor<n){
			mayor=n;
			ind=i;
		}
		
	}
	cout<<ind<<" "<<mayor;

}