#include <iostream>
using namespace std;
int var_Foot,Yposicion,i=1,j=1,f;

int main(void)
{
    cin>>var_Foot>>Yposicion;
    int Array[Yposicion+1];
    
    for(;i<=Yposicion;i++){cin>>Array[i];}

    for(;j<=var_Foot;j++){
            for(f=j,i=1;i<=Yposicion;i++){

                if(f==Array[i]){f++;}
                
                else if(f-Array[i]==1){f--;}
            }
			cout<<f<<endl;
        }
}