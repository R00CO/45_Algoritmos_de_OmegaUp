#include <iostream>
using namespace std;
int Pos_aux,S_iter,var_N,NumC,old,i;
int main(void){
	
cin>>Pos_aux>>S_iter;
int vec[Pos_aux];

for(i=0;i<Pos_aux;i++){cin>>vec[i];}

for(i=0;i<Pos_aux;i++){
    NumC=old+vec[i];
    old=NumC;

    if(NumC<=S_iter){var_N++;}

    if(NumC>S_iter){
        int aux;
        aux=NumC-vec[i];

        if(aux<S_iter){var_N++;}
    }
}
cout<<var_N;
}