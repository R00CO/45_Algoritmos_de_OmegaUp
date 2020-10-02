#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long var_N, var_L, ar_A[10010], ar_B[10010];
int i, Begin, End, Mid;

int main(void){
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin>>var_N>>var_L;
	for(;i<var_N;i++){cin>>ar_A[i];}
	
	sort(ar_A,ar_A+var_N);
	
	for(i=0;i<var_L;i++){
		cin>>ar_B[i];
		
		Begin=0;	End=var_N;	Mid=(Begin+End)/2;
		
		while(Begin<=End){
			if(ar_A[Mid]<ar_B[i]){
				Begin=Mid+1;
			}
			else if(ar_A[Mid]==ar_B[i]){
				cout<<Mid<<" ";
				break;
			}
			else{
				End=Mid-1;
			}
			Mid=(Begin+End)/2;
		}
	}
}