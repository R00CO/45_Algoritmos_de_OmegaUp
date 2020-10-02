#include <bits/stdc++.h>
using namespace std;
int main(void){
	int post,alturas,i,k,menor=9999999999999999;
	cin>>post>>alturas;
	int ele[alturas];
	for(i=0;i<alturas;i++){
		cin>>ele[i];
	}
	sort(ele,ele+alturas);
	for(i=0,k=post-1;i<alturas-post;i++,k++){
		if(ele[k]-ele[i]<menor){
			menor=ele[k]-ele[i];
		}
	}
	cout<<menor;
}