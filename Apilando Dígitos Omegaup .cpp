#include <iostream>
using namespace std;
int main(){
int repetir;
cin>>repetir;

for(int j=1;j<=repetir;j++){
	
	if(j<=repetir){
		for(int t=0;t<j;t++){
			cout<<j;
		}
	}
	
	cout<<endl;
}
for(int i=repetir-1;i>=1;i--){
	for(int t=1;t<=i;t++){
		cout<<i;
	}
	cout<<endl;
	
}
return 0;	
}