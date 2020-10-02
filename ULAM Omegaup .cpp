#include <iostream>
using namespace std;
int main()
{
	int limit,aux=0;
	cin>>limit;
	while(limit!=1){
		cout<<limit<<" ";
		
		if(limit%2==0){
			limit/=2;
		}
		else{
			limit=(limit*3)+1;
		}
		
	}
	cout<<"1";
return 0;
}