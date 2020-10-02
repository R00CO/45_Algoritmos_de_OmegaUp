#include <iostream>
using namespace std;

unsigned int c,limit,i,act=1,ant=0;
main(){
cin.tie(0);
ios_base::sync_with_stdio(0);
cin>>limit;

	if(limit==1){
		cout<<"1\n";
	}
	else{
	cout<<"1\n";
	for(i=1;i<limit;i++){
		c=ant+act;
		cout<<c<<endl;
		ant=act;
		act=c;
	}

}
}