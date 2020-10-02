#include <bits/stdc++.h>
using namespace std;
unsigned long long N,tama,i=0;
int main(){
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin>>tama;
	unsigned long long vec[tama];
		while(i<tama){
			cin>>vec[i];
			i++;
		}
	cin>>N;
	sort(vec,vec+tama);
	i=0;
	while(true){
		if(vec[i]>N){
			cout<<vec[i];
			break;
		}
		i++;
	}
	return 0;
}