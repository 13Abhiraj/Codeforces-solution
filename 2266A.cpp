#include <iostream>
using namespace std;
int main(){
    int t;
    int n;
    int a1,a2,a3;
    cin>>t;

    int narr[3000];
    int earr[3000][3];

    for(int i=0;i<t;i++){
        cin>>n;
        narr[i] =n;
        cin>>a1>>a2>>a3;
        earr[i][0]=a1;
        earr[i][1]=a2;
        earr[i][2]=a3;
    }int min;
    

    for(int j=0;j<t;j++){
        min = earr[j][0];
        for(int k=1;k<3;k++){
            if((min>earr[j][k])){
                min = earr[j][k];
            }
        }cout<<narr[j]-min<<endl;

    }




return 0;}

