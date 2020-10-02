#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> array;
	int num;
	cin>>num;
	while(num!=1){
		array.push_back(num);
		if(num%2){
			num= (num*3)+1;
		}
		else{
			num/=2;
		}
	}
	array.push_back(1);
	sort(array.begin(),array.end());
	for(num=0;num<array.size();num++){
		cout<<array[num]<<" ";
	}
}