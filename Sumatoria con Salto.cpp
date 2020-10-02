#include <iostream>
using namespace std;
unsigned long n,m,i,sum;
 main()
{
    // sumatoria = (N(N+1))/2

    cin>>n>>m;
    for(i=1;i<=m;){

        sum+=i;
        i+=n;
    }

     cout<<sum;
}