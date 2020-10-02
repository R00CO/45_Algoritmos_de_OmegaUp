#include <bits/stdc++.h>
using namespace std;
int main(void){
int longitud,i,valor;
string text;
getline(cin,text);
longitud=text.size();
if(longitud>3){
for(i=0;i<4;i++){
	cout<<text[i]<<" ASCII value is "<<int(text[i])<<endl;
}
}
else{

for(i=0;i<longitud;i++){
	cout<<text[i]<<" ASCII value is "<<int(text[i])<<endl;
}
}
}