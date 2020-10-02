#include <bits/stdc++.h>
using namespace std;
int main(void){
	int limit,i;
	cin>>limit;
	int vec[limit];
	for(i=0;i<limit;i++){
		cin>>vec[i];
	}
	for(i=limit-1;i>=0;i--){
		cout<<vec[i]<<" ";
	}
}