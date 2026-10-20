#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int t;
    int n,k;
    int balance[500];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        balance[i]=(int )pow(2,n+1-k)+2*(k-1);
}

    for(int j=0;j<t;j++){
        cout<<balance[j]<<endl;
    }

return 0;}