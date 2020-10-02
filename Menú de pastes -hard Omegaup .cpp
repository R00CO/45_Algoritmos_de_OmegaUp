#include <iostream>
using namespace std;
long long n,m, primario, pack, stade,
var, num, delay, numprin, res, aux;
int main(void)
{
cin.tie(0);
ios_base::sync_with_stdio(0);
  
     cin>>n>>m>>primario;
     while(primario--){
        cin>>pack;
        if(pack%n==0){
           stade=(pack/n)-1;
        }
        else
            stade= pack/n;
            var=(n*m)-(m-1);
            num=stade+var;
            delay=num-var;
            numprin=(delay*n)+1;
            res=pack-numprin;
            aux=res*m;
            num-=aux;
            cout<<num<<" ";
    }

}