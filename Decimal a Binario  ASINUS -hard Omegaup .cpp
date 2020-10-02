#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> var;                        //VECTOR <TIPO_DE_DATO> NOMBRE_VARIABLE
    int numeroN,i,aux;
     cin>>numeroN;                                           //guardar valores hasta el final   VARIABLE.Push_back(x);
    if(numeroN<0 or numeroN>500){
        cout<<"Error";
    }
    else{
    while(numeroN>0){
        aux=numeroN%2;
        var.push_back(aux);
        numeroN/=2;
    }                                            
    int lon=var.size();
    for(i=lon-1;i>=0;i--){
        cout<<var[i]<<"\n";
    }
    }
    return 0;
}