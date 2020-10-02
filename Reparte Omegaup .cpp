#include <iostream>

using namespace std;
int main(){

int x,Ni,Bol,resu=0;

cin>>Ni;
do{

cin>>Bol;
}while(Bol<0||Bol>11);

if(Ni>0&&Bol>0){

for(int i=0;i<Bol;i++){
	cin>>x;
	resu+=x;

}

cout<<resu/Ni<<" "<<resu%Ni;
}
return 0;
}